#ifndef FORMNUMPAD_H
#define FORMNUMPAD_H

#include "padbase.h"

namespace Ui {
class FormNumPad;
}

class FormNumPad : public PadBase
{
    Q_OBJECT
    
public:
    explicit FormNumPad(KeyBoard *parent, QStackedWidget *stackedWidget);
    ~FormNumPad();
    
private:
    Ui::FormNumPad *ui;

private slots:
    void gotoSymbol();
};

#endif // FORMNUMPAD_H
