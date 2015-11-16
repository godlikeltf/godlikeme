#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //    QByteArray mmm = "T16中";
    //    ui->pushButton->setText(tr(mmm));
    // struct PortSettings myComSetting = {BAUD9600,DATA_8,PAR_NONE,STOP_1,FLOW_OFF,50};
    myCom = new Posix_QextSerialPort("/dev/ttymxc3",QextSerialBase::Polling);
    //定义串口对象，指定串口名和查询模式，这里使用Polling
    //以读写方式打开串口

    myCom ->open(QIODevice::ReadWrite);

    myCom->setBaudRate(BAUD9600);
    //波特率设置，我们设置为115200

    myCom->setDataBits(DATA_8);
    //数据位设置，我们设置为8位数据位

    myCom->setParity(PAR_NONE);
    //奇偶校验设置，我们设置为无校验

    myCom->setStopBits(STOP_1);
    //停止位设置，我们设置为1位停止位

    myCom->setFlowControl(FLOW_OFF);
    //数据流控制设置，我们设置为无数据流控制

    myCom->setTimeout(50);


    readTimer = new QTimer(this);
    readTimer->start(100);
    //设置延时为100ms
    connect(readTimer,SIGNAL(timeout()),this,SLOT(slot_read_com()));
    sendMsg = "                                         ";
    ui->CW->setChecked(true);
    ui->CCW->setChecked(false);
    ui->mode_a->setChecked(true);
    ui->mode_n->setChecked(false);
}

void Widget::slot_read_com()
{
    if (myCom->bytesAvailable() > 0)
    {
        QByteArray temp;
        temp =  myCom->readAll();
        ui->textBrowser->insertPlainText(temp);
        qDebug()  << "nei rong:" << temp;
        if(temp[0] == 0xa3)
        {
            myCom->write(sendMsg);
        }
    }
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_DownLoad_clicked()
{
    int sum,temp,i;
    sendMsg = sendMsg.replace(0,ui->LineName->text().size(),ui->LineName->text().toAscii().data());
    temp = ui->Linekaimen->text().toInt()*10;
    sendMsg[20] = temp>>8;
    sendMsg[21] = temp;
    temp = ui->LineSongkai->text().toInt()*10;
    sendMsg[22] = temp>>8;
    sendMsg[23] = temp;
    temp = ui->LineMubiaoJiao->text().toInt();
    sendMsg[24] = temp>>8;
    sendMsg[25] = temp;
    temp = ui->LineJiaoduX->text().toInt();
    sendMsg[26] = temp>>8;
    sendMsg[27] = temp;
    temp = ui->LineJiaoduS->text().toInt();
    sendMsg[28] = temp>>8;
    sendMsg[29] = temp;
    temp = ui->LineMubiaoNiu->text().toInt()*10;
    sendMsg[30] = temp>>8;
    sendMsg[31] = temp;
    temp = ui->LineNiujuX->text().toInt()*10;
    sendMsg[32] = temp>>8;
    sendMsg[33] = temp;
    temp = ui->LineNiujuS->text().toInt()*10;
    sendMsg[34] = temp>>8;
    sendMsg[35] = temp;
    sendMsg[36] = 0;
    if(ui->CW->isChecked())
    {
        sendMsg[37] = 0x01;
    }
    else if(ui->CCW->isChecked())
    {
        sendMsg[37] = 0x02;
    }
    if(ui->mode_a->isChecked())
    {
        sendMsg[38] = 0x49;
    }
    else if(ui->mode_n->isChecked())
    {
        sendMsg[38] = 0x48;
    }
    for(i=0;i<39;i++)
    {
        sum += sendMsg[i];
    }
    sendMsg[39] = sum>>8;
    sendMsg[40] = sum;
    QByteArray startCmd =" ";
    startCmd[0] =0xa3;
    myCom->write(startCmd);
}
