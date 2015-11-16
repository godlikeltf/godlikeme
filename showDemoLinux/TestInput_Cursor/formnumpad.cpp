#include "formnumpad.h"
#include "ui_formnumpad.h"
#include "keyboard.h"
#include "formsymbolpad.h"

FormNumPad::FormNumPad(KeyBoard *parent, QStackedWidget *stackedWidget) :
    PadBase(parent, stackedWidget),
    ui(new Ui::FormNumPad)
{
    ui->setupUi(this);

    connectMapper(ui->toolButton_0);
    connectMapper(ui->toolButton_1);
    connectMapper(ui->toolButton_2);
    connectMapper(ui->toolButton_3);
    connectMapper(ui->toolButton_4);
    connectMapper(ui->toolButton_5);
    connectMapper(ui->toolButton_6);
    connectMapper(ui->toolButton_7);
    connectMapper(ui->toolButton_8);
    connectMapper(ui->toolButton_9);
    connectMapper(ui->toolButton_Colon);
    connectMapper(ui->toolButton_Comma);
    connectMapper(ui->toolButton_Dot);
    connectMapper(ui->toolButton_Minus);
    connectMapper(ui->toolButton_Plus);
    connectMapper(ui->toolButton_Line);

    // ¿Õ¸ñ
    connectMapper(ui->toolButton_Space, false, " ");

    connect(ui->toolButton_Enter, SIGNAL(clicked()), keyBoard(), SLOT(generateEnterChar()));
    connect(ui->toolButton_BackSpace, SIGNAL(clicked()), keyBoard(), SLOT(generateBackSpaceChar()));
    connect(ui->toolButton_Return, SIGNAL(clicked()), SLOT(onPrevPad()));
    connect(ui->toolButton_Symbol, SIGNAL(clicked()), SLOT(gotoSymbol()));
}

FormNumPad::~FormNumPad()
{
    delete ui;
}

void FormNumPad::gotoSymbol()
{
	keyBoard()->gotoSymbolPad(FormSymbolPad::MATH);
}
