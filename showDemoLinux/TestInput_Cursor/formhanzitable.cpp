#include <QToolButton>
#include <QSignalMapper>
#include "formhanzitable.h"
#include "ui_formhanzitable.h"
#include "formhanziselector.h"
#include "ChineseTranslator.h"

FormHanziTable::FormHanziTable(FormHanziSelector *parent) :
    QWidget(parent),
    ui(new Ui::FormHanziTable)
{
    ui->setupUi(this);
    _hanziSelector = parent;

    QToolButton *btns[] = {
        ui->toolButton_00, ui->toolButton_01, ui->toolButton_02, ui->toolButton_03, ui->toolButton_04,
        ui->toolButton_10, ui->toolButton_11, ui->toolButton_12, ui->toolButton_13, ui->toolButton_14,
        ui->toolButton_20, ui->toolButton_21, ui->toolButton_22, ui->toolButton_23, ui->toolButton_24,
        ui->toolButton_30, ui->toolButton_31, ui->toolButton_32, ui->toolButton_33, ui->toolButton_34,
    };
    const size_t btnCount = sizeof(btns)/sizeof(btns[0]);
    _page.assign(btns, btns + btnCount);
    _pageNum = 0;

    _signalMapper = new QSignalMapper(this);

    for (QToolButton **it = btns; it < btns + btnCount; it++)
    {
        QToolButton *btn = *it;
        this->connect(btn, SIGNAL(clicked()), _signalMapper, SLOT(map()));
    }

    connect(_signalMapper, SIGNAL(mapped(const QString &)), this, SLOT(setHanziText(const QString &)));
}

FormHanziTable::~FormHanziTable()
{
    delete ui;
    delete _signalMapper;
}

// 上一页
void FormHanziTable::onPageUp()
{
    _pageNum--;
    updateUi();
}

// 下一页
void FormHanziTable::onPageDown()
{
    _pageNum++;
    updateUi();
}

void FormHanziTable::updateUi()
{
    if (_hanzi < _hanziEnd)
    {
        const QString *pageBegin = _hanzi + _pageNum * _page.size();
        const QString *pageEnd = pageBegin + _page.size();
        if (pageEnd > _hanziEnd)
            pageEnd = _hanziEnd;

        for (const QString *pageItem = pageBegin; pageItem < pageEnd; pageItem++)
        {
            QToolButton *btn = _page[pageItem - pageBegin];
            btn->setEnabled(true);
            btn->setText(*pageItem);
        }
        for (size_t i = pageEnd - pageBegin; i < _page.size(); i++)
        {
            _page[i]->setText("");
            _page[i]->setEnabled(false);
        }

        setMapper();
        ui->toolButton_PageUp->setEnabled(_pageNum > 0);
        ui->toolButton_PageDown->setEnabled(pageEnd < _hanziEnd);
    }
    else
    {
        ui->toolButton_PageUp->setEnabled(false);
        ui->toolButton_PageDown->setEnabled(false);
    }

	int pageCount = ((_hanziEnd - _hanzi) + _page.size() - 1) / _page.size();
    ui->label_Progress->setText(QString().sprintf("%d/%d", _pageNum + 1, pageCount));
}

void FormHanziTable::setHanziText(const QString &s)
{
    //keyBoard()->setHanziText(s);
    _hanziSelector->onSetChar(s);
}

void FormHanziTable::setMapper()
{
    for (std::vector<QToolButton *>::iterator w = _page.begin(); w != _page.end(); w++)
    {
        QToolButton *btn = *w;
        _signalMapper->setMapping(btn, btn->text());
    }
}

void FormHanziTable::setHanziTable(const QString *v, const QString *vEnd)
{
    _hanzi = v;
    _hanziEnd = vEnd;
    _pageNum = 0;

    updateUi();
}
