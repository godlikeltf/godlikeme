#include "dialogtooltip.h"
#include "ui_dialogtooltip.h"

DialogToolTip::DialogToolTip(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogToolTip)
{
    ui->setupUi(this);
    Qt::WindowFlags flags = Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint;
#ifndef WIN32
    flags |= Qt::X11BypassWindowManagerHint;
#endif
    this->setWindowFlags( flags );
}

DialogToolTip::~DialogToolTip()
{
    delete ui;
}

void DialogToolTip::show(const QString &s)
{
    ui->label->setText(s);
    QDialog::show();
}
