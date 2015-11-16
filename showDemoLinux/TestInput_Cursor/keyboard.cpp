#include <QtGui>
#include <iostream>
#include <cassert>
#include <QTextEdit>
#include "keyboard.h"
//#include "login.h"
#include "formhanziselector.h"
#include "formnumpad.h"
#include "formsymbolpad.h"
#include "ChineseTranslator.h"

// 键盘上基本键的集中管理
class KeyBoardButtons
{
    std::vector<QToolButton *> _btns;
public:
    enum EnumButtonCount
    {
        NumCount = 10,
        CharCount = 26,
        SpaceCount = 1
    };

    KeyBoardButtons(KeyBoard *keyBoard)
    {
        QToolButton *btns[] = {
            // 数字键
            keyBoard->toolButton_0, keyBoard->toolButton_1, keyBoard->toolButton_2, keyBoard->toolButton_3,
            keyBoard->toolButton_4, keyBoard->toolButton_5, keyBoard->toolButton_6, keyBoard->toolButton_7,
            keyBoard->toolButton_8, keyBoard->toolButton_9,
            // 字母键
            keyBoard->toolButton_a, keyBoard->toolButton_b, keyBoard->toolButton_c, keyBoard->toolButton_d,
            keyBoard->toolButton_e, keyBoard->toolButton_f, keyBoard->toolButton_g,
            keyBoard->toolButton_h, keyBoard->toolButton_i, keyBoard->toolButton_j, keyBoard->toolButton_k,
            keyBoard->toolButton_l, keyBoard->toolButton_m, keyBoard->toolButton_n,
            keyBoard->toolButton_o, keyBoard->toolButton_p, keyBoard->toolButton_q, keyBoard->toolButton_r,
            keyBoard->toolButton_s, keyBoard->toolButton_t,
            keyBoard->toolButton_u, keyBoard->toolButton_v, keyBoard->toolButton_w, keyBoard->toolButton_x,
            keyBoard->toolButton_y, keyBoard->toolButton_z,
            // 空格键
            keyBoard->toolButton_space,
        };
        assert(totalCount() == sizeof(btns)/sizeof(btns[0]));

        _btns.assign(btns, btns + totalCount());
    }

    size_t totalCount() const
    {
        return NumCount + CharCount + SpaceCount;
    }

    //---------------------------------------------
    QToolButton **begin() const
    {
        return const_cast<QToolButton **>(&_btns[0]);
    }
    QToolButton **end() const
    {
        return begin() + totalCount();
    }
    //---------------------------------------------
    // 数字字母键起始QToolButton
    QToolButton **numCharBegin() const
    {
        return begin();
    }
    // 数字字母键终止QToolButton
    QToolButton **numCharEnd() const
    {
        return numCharBegin() + NumCount + CharCount;
    }

    //---------------------------------------------
    QToolButton **charBegin() const
    {
        return begin() + NumCount;
    }
    QToolButton **charEnd() const
    {
        return charBegin() + CharCount;
    }

    //---------------------------------------------
    QToolButton *space() const
    {
        return begin()[NumCount + CharCount];
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
KeyBoard::KeyBoard( QWidget * parent, Qt::WindowFlags fl )
	: QDialog( parent, fl ), _lastFocusedWidget(NULL)
{
	setupUi(this);
	connect(qApp, SIGNAL(focusChanged(QWidget*,QWidget*)),
		this, SLOT(saveFocusWidget(QWidget*,QWidget*)));

    Qt::WindowFlags flags = Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint;
#ifndef WIN32
    flags |= Qt::X11BypassWindowManagerHint;
#endif
    this->setWindowFlags( flags );
    _toolTip = new DialogToolTip(this);
	// move to bottom
    //QRect desktopRect = QApplication::desktop()->rect();
    // 键盘高度为屏幕的一半减去40像素，这样做是因为Ubuntu下无法做到将被键盘覆盖推到键盘上面(主要是受限于窗体不能超越屏幕顶端)
    // 所以只能通过躲避控件的方式来达到将控件与键盘不覆盖的效果
    // 躲避策略为：将键盘置于屏幕的上下或下方，宽度与屏幕相同，高度为屏幕高/2-40像素
    // 这样就要求位于屏幕中央的控件高度不应>80像素
    // 另有一细节，此处设置的宽度好像未把Laucher计算在内，从而有一部分被laucher覆盖了
    // 除非在每次setVisible(true)的时候，再调整控件才不会被laucher覆盖
    //int frameHeight = desktopRect.height() / 2 - 20;
    //this->resize(desktopRect.width(), frameHeight);
    //move(0, desktopRect.height() - frameHeight);
    //setGeometry(0, QApplication::desktop()->rect().height() - frameHeight,
    //QApplication::desktop()->rect().width(), frameHeight);

	caps_Lock = false;

	signalMapper=new QSignalMapper(this);
    _signalPressedMapper = new QSignalMapper(this);
    _signalReleaseMapper = new QSignalMapper(this);

    setMapper();
	connectMapper();


	connect(signalMapper,SIGNAL(mapped(const QString&)),this,SLOT(setDispText(const QString&)));
    connect(_signalPressedMapper, SIGNAL(mapped(QWidget*)), SLOT(onButtonPressed(QWidget *)));
    connect(_signalReleaseMapper, SIGNAL(mapped(QWidget*)), SLOT(onButtonRelease(QWidget*)));

	connect(toolButton_backspace,SIGNAL(clicked()),this,SLOT(onBackspace()));
	connect(toolButton_capslock,SIGNAL(clicked()),this,SLOT(onCapslock()));
	connect(toolButton_hide,SIGNAL(clicked()),this,SLOT(onEsc()));
    connect(toolButton_Enter, SIGNAL(clicked()), this, SLOT(generateEnterChar()));
	//connect(horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(onHorizontalSliderValueChanged(int)));

	connect( toolButton_znen, SIGNAL( clicked() ), this, SLOT( onModeInput() ) );
	connect(toolButton_NumPad, SIGNAL(clicked()), SLOT(gotoNumPad()));
	connect(toolButton_SymbolPad, SIGNAL(clicked()), SLOT(gotoSymbolPad()));

    connect(this, SIGNAL(sigUpdatePosition(QWidget*)), SLOT(updatePosition(QWidget*)));

	_hanziSelector = new FormHanziSelector(this);
	_numPad = new FormNumPad(this, stackedWidget);
	_symbolPad = new FormSymbolPad(this, stackedWidget);

	this->stackedWidget->setCurrentIndex(0);
	stackedWidget_Normal->setCurrentIndex(0);
    setModeInput( KEBOARD_ENG );
//    setModeInput(KEBOARD_CHS);
}

KeyBoard::~KeyBoard()
{
	delete _hanziSelector;
	delete _numPad;
	delete _symbolPad;

    delete _toolTip;
}

void KeyBoard::onButtonPressed(QWidget *widget)
{
    QToolButton *button = dynamic_cast<QToolButton *>(widget);
    QString text = button->text();
    text = text.trimmed();
    if (text.isEmpty())
        return ;

    bool isThisOnTop = frameGeometry().top() < 10;

    QRect rect = button->rect();

    QRect frameRect = _toolTip->frameGeometry();
    frameRect.setWidth(1.4 * rect.width());
    frameRect.setHeight(frameRect.width() * 0.9);

    if (isThisOnTop)
    {
        QPoint bottomLeft = button->mapToGlobal(rect.bottomLeft());
        _toolTip->setGeometry(bottomLeft.x() - (frameRect.width() - rect.width()) / 2,
                              bottomLeft.y() + 3,
                              frameRect.width(), frameRect.height());
    }
    else
    {
        QPoint topLeft = button->mapToGlobal(rect.topLeft());
        _toolTip->setGeometry(topLeft.x() - (frameRect.width() - rect.width()) / 2,
                              topLeft.y() - frameRect.height() - 3,
                              frameRect.width(), frameRect.height());
    }
    _toolTip->show(text);
}

void KeyBoard::onButtonRelease(QWidget *)
{
    _toolTip->hide();
}

bool KeyBoard::event(QEvent *e)
{
	switch (e->type())
	{
	case QEvent::WindowActivate:
		if (_lastFocusedWidget)
			_lastFocusedWidget->activateWindow();
		break;
	default:
		break;
	}

	return QWidget::event(e);
}

void KeyBoard::saveFocusWidget(QWidget * /*oldFocus*/, QWidget *newFocus)
{
	if (newFocus != NULL && !this->isAncestorOf(newFocus) && _lastFocusedWidget != newFocus) {
		_lastFocusedWidget = newFocus;
        updatePosition(NULL);
	}
}

//void KeyBoard::mouseMoveEvent(QMouseEvent *event)
//{
//    if (event->buttons() == Qt::LeftButton)
//    {
//        move(event->globalPos() - dragPosition);
//        event->accept();
//    }
//}

//void KeyBoard::mousePressEvent(QMouseEvent *event)
//{
//    if (event->button() == Qt::LeftButton)
//    {
//        dragPosition = event->globalPos() - frameGeometry().topLeft();
//        event->accept();
//    }
//    if (event->button() == Qt::RightButton)
//    {
//        hide();
//    }
//}

//将toolButton的signal(clicked())连接到signalMapper的slots(map())
void KeyBoard::connectMapper()
{
    KeyBoardButtons buttons(this);

    for (QToolButton **btn = buttons.numCharBegin(); btn < buttons.numCharEnd(); btn++)
    {
        connect(*btn, SIGNAL(pressed()), _signalPressedMapper, SLOT(map()));
        connect(*btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
        connect(*btn, SIGNAL(released()), _signalReleaseMapper, SLOT(map()));
    }
    connect(buttons.space(), SIGNAL(clicked()), signalMapper, SLOT(map()));
}

// mapping the toolButton text to signalMapper
void KeyBoard::setMapper()
{
    KeyBoardButtons buttons(this);

    for (QToolButton **btn = buttons.numCharBegin(); btn < buttons.numCharEnd(); btn++)
    {
        _signalPressedMapper->setMapping(*btn, *btn);
        signalMapper->setMapping(*btn, (*btn)->text());
        _signalReleaseMapper->setMapping(*btn, *btn);
    }
    signalMapper->setMapping(buttons.space(), " ");
}

//// 方向键
//void KeyBoard::onCursorUp()
//{
//    QKeyEvent upPress(QEvent::KeyPress,Qt::Key_Up,Qt::NoModifier);
//    QApplication::sendEvent(QApplication::focusWidget(),&upPress);
//}

// 软件键盘透明度
//void KeyBoard::onHorizontalSliderValueChanged(int value)
//{
//    horizontalSlider->setRange(0,255);
//    qreal opacity=(qreal)((1.0/256.0)*value);
//    setWindowOpacity(opacity);
//    lcdNumber->display(value);
//}

// insert and show text on display(QLineEdit)
void KeyBoard::setDispText(const QString& text)
{
	if( m_keyType == KEBOARD_ENG )
        setHanziText(text);
	else
		_hanziSelector->pushBackPinyinString(text.toLocal8Bit().data());
}

// 切换大小写
void KeyBoard::onCapslock()
{
	//if( m_keyType != KEBOARD_ENG )
	//	return ;

	caps_Lock = !caps_Lock;
	
	char c = 'a';
	if(caps_Lock)
		c = 'A';

    KeyBoardButtons btns(this);
    for (QToolButton **btn = btns.charBegin(); btn < btns.charEnd(); btn++)
        (*btn)->setText(QString().sprintf("%c", c++));

	setMapper();
}

// 关闭软件键盘
void KeyBoard::onEsc()
{
	_hanziSelector->reset();
	this->hide();
}

// 发送退格键
void KeyBoard::onBackspace()
{
	if (_hanziSelector->pinyin().empty())
	{
		generateBackSpaceChar();
	}
	else
	{
		_hanziSelector->popBackPinyinChar();
	}
}

void KeyBoard::onModeInput()
{
	if( toolButton_znen->text() == "EN" )
	{
		setModeInput( KEBOARD_CHS );
	}
	else
	{
		setModeInput( KEBOARD_ENG );
	}
}

void KeyBoard::setModeInput( int type )
{
	m_keyType = type;

    // if target type is chinese, but caps locked, change to lower case
	if (type == KEBOARD_CHS && caps_Lock)
		onCapslock();
    toolButton_znen->setText( type == KEBOARD_ENG ? "EN" : tr("中") );
	_hanziSelector->activate(type == KEBOARD_CHS);
}

// 设置汉字，此处将会把汉字发往QInputContext，然后由QInputContext再发往目标QWidget
void KeyBoard::setHanziText( const QString& text )
{
	if (text.isNull() || text.isEmpty())
		return ;

	int length = text.length();
	for (int i = 0; i < length; i++)
		emit characterGenerated( text.at(i) );
    emit sigUpdatePosition(QApplication::focusWidget());
}

// 更新键盘位置，键盘有两个位置：屏幕顶部，屏幕底部
void KeyBoard::updatePosition(QWidget *widget)
{
    if (!widget)
    {
//        qDebug()<<"--------------------------------";
        this->stackedWidget->setCurrentIndex(0);
        setModeInput( KEBOARD_ENG );
        widget = QApplication::focusWidget();
    }
    if (!widget || widget != QApplication::focusWidget())
        return ;
    QRect widgetRect = widget->rect();
    QPoint panelPos = QPoint(widgetRect.left(), widgetRect.bottom() + 2);
    panelPos = widget->mapToGlobal(panelPos);
    if (panelPos.y()>506)
         panelPos.setY(widgetRect.top() - 4 -524);
    if (panelPos.x()>564)
         panelPos.setX(564);
    move(panelPos);

//    //std::cout << "------------------------------------------------" << std::endl;
//    if (!widget)
//        widget = QApplication::focusWidget();
//    if (!widget || widget != QApplication::focusWidget())
//		return ;

//	QRect widgetRect = widget->rect();
//	{
//		// 如果焦点控件是TextEdit，则按照光标来重定位键盘位置
//		QTextEdit *textEdit = dynamic_cast<QTextEdit *>(widget);
//		if (textEdit)
//        {
//			widgetRect = textEdit->cursorRect();
//            widgetRect.setY(widgetRect.y() - 3);
//            widgetRect.setBottom(widgetRect.bottom() + 3);
//        }
//        //std::cout << "QCursor: " << QCursor::pos().x() << ", " << QCursor::pos().y() << ", " << std::endl;
//        //std::cout << "Cursor : y=" << widgetRect.y() << ", height=" << widgetRect.height() << std::endl;
//	}
//	widgetRect = QRect(widget->mapToGlobal(QPoint(widgetRect.left(), widgetRect.top())),
//		widget->mapToGlobal(QPoint(widgetRect.right(), widgetRect.bottom())));

//	QRect keyboardRect = frameGeometry();
//    if (!keyboardRect.intersects(widgetRect))
//        return ;

//    //std::cout << "widget: y=" << widgetRect.y() << ", height=" << widgetRect.height() << std::endl;
//    //std::cout << "KeyBoard: y=" << keyboardRect.y() << ", height=" << keyboardRect.height() << std::endl;

//    // 屏幕尺寸
//    QRect desktopRect = QApplication::desktop()->rect();

//    if (widgetRect.bottom() > desktopRect.height() - keyboardRect.height())
//		move(0, 0);
//	else
//        move(0, desktopRect.height() - keyboardRect.height());
}

void KeyBoard::setVisible(bool visible)
{
	QDialog::setVisible(visible);

	if (visible)
        updatePosition(NULL);

	//// 如果键盘挡住上了当前控件，则移动窗体，将控件显示出来(其实也可以将该控件移到可见区域的中央)
	//// 当键盘关闭时，再将窗体移回原处
    //// 此方法在Windows下有效，但在Ubuntu下行不通：窗体上沿不能超越屏幕顶部
	//QPointer<QWidget> w = QApplication::focusWidget();
	//if (!w.isNull())
	//{
	//    if (visible)
	//    {
	//        QRect wRect(w->mapToGlobal(QPoint(0, 0)), w->mapToGlobal(QPoint(w->width(), w->height())));//>parentWidget(), w->frameGeometry());
	//        QRect thisRect(mapToGlobal(QPoint(0, 0)), mapToGlobal(QPoint(frameGeometry().width(), frameGeometry().height())));
	//
	//        //std::cout << "K(" << thisRect.x() << ", " << thisRect.y() << ", " << thisRect.right() << ", " << thisRect.bottom() << ")"
	//        //          << " & W("
	//        //          << wRect.x() << ", " << wRect.y() << ", " << wRect.right() << ", " << wRect.bottom() << ")"
	//        //          << " = " << !thisRect.intersected(wRect).isEmpty() << std::endl;
	//        if (!thisRect.intersected(wRect).isEmpty())
	//        {
	//            movedWidget = w->topLevelWidget();
	//            // 将输入控件移至可见区域的1/3处
	//            movedY = wRect.top() - (thisRect.top() - wRect.height()) * 2 / 3;
	//
	//            QRect wTopRect = movedWidget->frameGeometry();
	//            movedWidget->move(wTopRect.x(), wTopRect.y() - movedY);
	//            return ;
	//        }
	//    }
	//    else
	//    {
	//        QWidget *widget = w->topLevelWidget();
	//        if (widget == movedWidget && movedY != 0)
	//        {
	//            QRect wTopRect = widget->frameGeometry();
	//            widget->move(wTopRect.x(), wTopRect.y() + movedY);
	//        }
	//    }
	//}
	//movedWidget = NULL;
	//movedY = 0;
}

// 数字、符号、基本键盘切换(支持回退，即返回功能)
void KeyBoard::gotoPad(QWidget *pad)
{
	if (stackedWidget->currentWidget() != pad)
	{
		_lstHistory.push_back(stackedWidget->currentWidget());
		stackedWidget->setCurrentWidget(pad);
	}
}
void KeyBoard::gotoNumPad()
{
	gotoPad(_numPad);
}

// symbolType: FormSymbolPad::EnumSymbolType
void KeyBoard::gotoSymbolPad(int symbolType)
{
	_symbolPad->active(static_cast<FormSymbolPad::EnumSymbolType>(symbolType));
	gotoPad(_symbolPad);
}
void KeyBoard::gotoSymbolPad()
{
	gotoSymbolPad(m_keyType == KEBOARD_CHS? FormSymbolPad::CHS: FormSymbolPad::ENG);
}
// 返回上一键盘
void KeyBoard::onPrevPad()
{
    if (_lstHistory.empty())
        this->stackedWidget->setCurrentIndex(0);
    else
    {
        QWidget *pad = *_lstHistory.rbegin();
        _lstHistory.pop_back();
        stackedWidget->setCurrentWidget(pad);
    }
}


// 特殊字符生成
void KeyBoard::sendKeyEvent(QKeyEvent *keyEvent)
{
    QWidget *widget = QApplication::focusWidget();
    if (widget)
    {
        QApplication::sendEvent(widget, keyEvent);
        emit sigUpdatePosition(widget);
    }
}

// 回车
void KeyBoard::generateEnterChar()
{
    // Key_Return: 主键盘的回车键
    // Key_Enter: 小键盘的回车键
    QKeyEvent enterPress(QEvent::KeyPress, Qt::Key_Return, Qt::NoModifier);
    sendKeyEvent(&enterPress);
}
// 退格
void KeyBoard::generateBackSpaceChar()
{
    QKeyEvent delPress(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier);
    sendKeyEvent(&delPress);
}
