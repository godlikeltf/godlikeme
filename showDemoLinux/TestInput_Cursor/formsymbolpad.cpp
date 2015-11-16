#include <cassert>
#include <algorithm>
#include "formsymbolpad.h"
#include "ui_formsymbolpad.h"
#include "ChineseTranslator.h"

FormSymbolPad::FormSymbolPad(KeyBoard *parent, QStackedWidget *stackedWidget) :
    PadBase(parent, stackedWidget),
    ui(new Ui::FormSymbolPad)
{
    ui->setupUi(this);

    _page.push_back(ui->toolButton_00);
    _page.push_back(ui->toolButton_01);
    _page.push_back(ui->toolButton_02);
    _page.push_back(ui->toolButton_03);
    _page.push_back(ui->toolButton_04);
    _page.push_back(ui->toolButton_05);
    _page.push_back(ui->toolButton_06);
    _page.push_back(ui->toolButton_07);
    _page.push_back(ui->toolButton_08);
    _page.push_back(ui->toolButton_09);
    _page.push_back(ui->toolButton_10);
    _page.push_back(ui->toolButton_11);
    _page.push_back(ui->toolButton_12);
    _page.push_back(ui->toolButton_13);
    _page.push_back(ui->toolButton_14);
    _page.push_back(ui->toolButton_15);
    _page.push_back(ui->toolButton_16);
    _page.push_back(ui->toolButton_17);
    for (std::vector<QToolButton *>::iterator it = _page.begin(); it != _page.end(); it++)
    {
        QToolButton *btn = *it;
        connectMapper(btn, true);
    }

	connectMapper(ui->toolButton_Space, false, " ");
	
    connect(ui->toolButton_Return, SIGNAL(clicked()), SLOT(onPrevPad()));
    connect(ui->toolButton_Enter, SIGNAL(clicked()), SLOT(onEnter()));
    connect(ui->toolButton_BackSpace, SIGNAL(clicked()), SLOT(onBackSpace()));

    _chsSymbol = tr("·~！@#￥%…&*（）-=—+｛｝【】、|：；“‘，。、《》？℃");
    _engSymbol = tr("`~!@#$%^&*()_+-={}[]|\\:;\"',./<>?");
    _mathSymbol = tr("+-×÷=∈∏∑∕√∝∞∟∠∣∥∧∨∩∪∫∮∴∵∶∷∽≈≌≒≠≡≤≥≦≧≮≯⊕⊙⊥⊿⌒①②③④⑤⑥⑦⑧⑨⑩");

	onCHS();
}

FormSymbolPad::~FormSymbolPad()
{
    delete ui;
}

void FormSymbolPad::active(EnumSymbolType symbolType)
{
    switch(symbolType)
    {
    case CHS:
        onCHS();
        break;
    case ENG:
        onENG();
        break;
    case MATH:
        onMath();
        break;
    default:
        assert(0);
    };
}

void FormSymbolPad::updateUi()
{
    int offset = _pageNum * _page.size();
    QString::const_iterator it = _curSymbol->begin() + offset;

    size_t i = 0;
    for (; i < _page.size() && it != _curSymbol->end(); it++, i++)
    {
        _page[i]->setEnabled(true);
        if (*it == '&')
            _page[i]->setText(QString("&") + *it);
        else
            _page[i]->setText(*it);
        setMapping(_page[i], *it);
    }
    for (; i < _page.size(); i++)
    {
        _page[i]->setEnabled(false);
        _page[i]->setText("");
        setMapping(_page[i]);
    }

	int pageCount = (_curSymbol->size() + _page.size() - 1) / _page.size();
	ui->label_CurPage->setText(QString().sprintf("%d/%d", _pageNum + 1, pageCount));

    ui->toolButton_PageDown->setEnabled(it != _curSymbol->end());
    ui->toolButton_PageUp->setEnabled(_pageNum > 0);

    ui->toolButton_CHS->setChecked(_curSymbol == &_chsSymbol);
    ui->toolButton_ENG->setChecked(_curSymbol == &_engSymbol);
    ui->toolButton_Math->setChecked(_curSymbol == &_mathSymbol);
}

void FormSymbolPad::onPrevPage()
{
    --_pageNum;
    updateUi();
}

void FormSymbolPad::onNextPage()
{
    ++_pageNum;
    updateUi();
}

void FormSymbolPad::activeSymbol(const QString *symbol)
{
    if (_curSymbol == symbol)
        return ;

    _curSymbol = symbol;
    _pageNum = 0;
    updateUi();
}

void FormSymbolPad::onCHS()
{
    activeSymbol(&_chsSymbol);
}

void FormSymbolPad::onENG()
{
    activeSymbol(&_engSymbol);
}

void FormSymbolPad::onMath()
{
    activeSymbol(&_mathSymbol);
}
