#include <QSignalMapper>
#include "padbase.h"
#include "keyboard.h"

PadBase::PadBase(KeyBoard *parent, QStackedWidget *stackedWidget) :
    QWidget(parent), _signalMapper(NULL)
{
    _keyBoard = parent;
	_stackedWidget = stackedWidget;

    _signalMapper = new QSignalMapper(this);
    connect(_signalMapper, SIGNAL(mapped(const QString &)), SLOT(onSetChar(const QString &)));

	if (_stackedWidget)
		_stackedWidget->addWidget(this);
}

PadBase::~PadBase()
{
    delete _signalMapper;
    _signalMapper = NULL;
}

void PadBase::onSetChar(const QString &text)
{
    keyBoard()->setHanziText(text);
}

// 将指定的按钮连接到signalMapper上
void PadBase::connectMapper(QToolButton *btn, bool justConnect, const QString &s)
{
    connect(btn, SIGNAL(clicked()), _signalMapper, SLOT(map()));
    if (!justConnect)
        setMapping(btn, s);
}

void PadBase::setMapping(QToolButton *btn, const QString &s)
{
    if (s.isNull())
        _signalMapper->setMapping(btn, btn->text());
    else
        _signalMapper->setMapping(btn, s);
}

void PadBase::onPrevPad()
{
    _keyBoard->onPrevPad();
}

void PadBase::onEnter()
{
    _keyBoard->generateEnterChar();
}

void PadBase::onBackSpace()
{
    _keyBoard->generateBackSpaceChar();
}
