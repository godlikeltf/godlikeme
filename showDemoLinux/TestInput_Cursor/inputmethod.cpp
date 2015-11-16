#include <QDebug>
#include <QDesktopWidget>
#include "inputmethod.h"

InputMethod::InputMethod()
{
    keyboard = new KeyBoard;
    //keyboard->move(0, 120);
    connect( keyboard, SIGNAL( characterGenerated(QChar) ), SLOT(setInputText(QChar ) ) );
}

InputMethod::~InputMethod()
{
    delete keyboard;
}

/*
* Name : void eventFilter(QObject *obj, QEvent *event);
* Type : QEvent
* Func : judge input method event
* In   : QObject,QEvent
* Out  : bool
*/
bool InputMethod::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::MouseButtonPress)
    {
        emit setImObjName(obj->objectName()); //send the Object Name of event to judge who trigger it
        //qDebug() <<obj->objectName();
        //showKeyBoard();
        keyboard->show();
        return true;
    }

    return QObject::eventFilter(obj,event);
}


///*
//* Name : void showKeyBoard();
//* Type : function
//* Func : show keyBoard
//* In   : Null
//* Out  : Null
//*/
//void InputMethod::showKeyBoard()
//{
//    keyboard->move(0,120);
//    std::cout << __FUNCTION__ << ":" << keyboard->frameGeometry().x() << std::endl;
//	keyboard->show();
//    std::cout << __FUNCTION__ << ":" << keyboard->frameGeometry().x() << std::endl;
//}



void InputMethod::setInputText( QChar c )
{
	QPointer<QWidget> w = QApplication::focusWidget();
	if (!w)
		return;

	/* 当收到按键面板的按键输入后，分别向当前焦点Widget发送KeyPress和KeyRelease事件 */

	QKeyEvent keyPress(QEvent::KeyPress, c.unicode(), Qt::NoModifier, QString(c));
	QApplication::sendEvent(w, &keyPress);

	if (!w)
		return;

	QKeyEvent keyRelease(QEvent::KeyRelease, c.unicode(), Qt::NoModifier, QString(c));
	QApplication::sendEvent(w, &keyRelease);
}

QString InputMethod::identifierName()
{
	return "";
}
QString InputMethod::language()
{
	return "";
}

void InputMethod::reset()
{
}
void InputMethod::update()
{
}

bool InputMethod::isComposing() const
{
	return true;
}

bool InputMethod::filterEvent( const QEvent *event )
{
	if (event->type() == QEvent::RequestSoftwareInputPanel) 
	{
		/* 当某个Widget请求软键盘输入时，显示软键盘 */
		keyboard->show();
		return true;
	}
	else if (event->type() == QEvent::CloseSoftwareInputPanel) 
	{
		/* 当某个Widget请求关闭软键盘输入时，关闭软键盘 */
        keyboard->hide();
		return true;
	}

    return false;
}
