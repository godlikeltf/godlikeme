#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "posix_qextserialport.h"
#include <QTimer>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public slots:
  void slot_read_com();

private slots:
  void on_DownLoad_clicked();

private:
    Ui::Widget *ui;
    Posix_QextSerialPort *myCom;
    QTimer *readTimer;
     QByteArray sendMsg;
};

#endif // WIDGET_H
