#ifndef PADBASE_H
#define PADBASE_H

#include <QWidget>

class KeyBoard;
class QToolButton;
class QStackedWidget;
class QSignalMapper;

class PadBase : public QWidget
{
    Q_OBJECT
public:
    explicit PadBase(KeyBoard *parent, QStackedWidget *stackedWidget);
    ~PadBase();

    KeyBoard *keyBoard() const
    {
        return _keyBoard;
    }

protected:
    QSignalMapper *signalMapper() const
    {
        return _signalMapper;
    }

    // 将指定的按钮连接到signalMapper上
    void connectMapper(QToolButton *btn, bool justConnect = false, const QString &s = QString::null);
    void setMapping(QToolButton *btn, const QString &s = QString::null);

private:
    KeyBoard *_keyBoard;
	QStackedWidget *_stackedWidget;
    QSignalMapper *_signalMapper;

signals:
    
public slots:
    virtual void onSetChar(const QString &);
    virtual void onPrevPad();
    virtual void onEnter();
    virtual void onBackSpace();
};

#endif // PADBASE_H
