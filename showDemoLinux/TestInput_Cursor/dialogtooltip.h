#ifndef DIALOGTOOLTIP_H
#define DIALOGTOOLTIP_H

#include <QDialog>

namespace Ui {
class DialogToolTip;
}

class DialogToolTip : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogToolTip(QWidget *parent = 0);
    ~DialogToolTip();
    
    void show(const QString &s);
private:
    Ui::DialogToolTip *ui;
};

#endif // DIALOGTOOLTIP_H
