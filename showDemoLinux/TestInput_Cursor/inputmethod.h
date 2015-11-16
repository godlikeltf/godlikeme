#ifndef INPUTMETHOD_H
#define INPUTMETHOD_H

#include "keyboard.h"
#include "qinputcontext.h"

class InputMethod:public QInputContext
{
    Q_OBJECT
public:
    InputMethod();
    ~InputMethod();

    bool eventFilter(QObject *obj, QEvent *event);

	QString identifierName();
    QString language();

    void reset();
    void update();
	bool filterEvent( const QEvent *event );
    bool isComposing() const;

public:
    KeyBoard *keyboard;

public:
    //void showKeyBoard();

signals:
    void setImObjName(QString);

private slots:
	void setInputText(QChar c);
};

#endif // INPUTMETHOD_H
