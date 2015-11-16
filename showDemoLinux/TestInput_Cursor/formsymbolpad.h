#ifndef FORMSYMBOLPAD_H
#define FORMSYMBOLPAD_H

#include <vector>
#include "padbase.h"

class QToolButton;

namespace Ui {
class FormSymbolPad;
}

class FormSymbolPad : public PadBase
{
    Q_OBJECT
    
public:
    explicit FormSymbolPad(KeyBoard *parent, QStackedWidget *stackedWidget);
    ~FormSymbolPad();
    
    enum EnumSymbolType{
        CHS, ENG, MATH
    };
    void active(EnumSymbolType symbolType);

private:
    Ui::FormSymbolPad *ui;

    // 所有符号列表
    QString _engSymbol, _chsSymbol, _mathSymbol;
	const QString *_curSymbol;

    // 页面
    std::vector<QToolButton *> _page;
	int _pageNum;

private:
    void updateUi();

    void activeSymbol(const QString *symbol);

private slots:
    void onPrevPage();
    void onNextPage();

    void onCHS();
    void onENG();
    void onMath();
};

#endif // FORMSYMBOLPAD_H
