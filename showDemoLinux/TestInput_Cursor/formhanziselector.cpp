#include <cassert>
#include <QToolButton>
#include <QSignalMapper>
#include "keyboard.h"
#include "formhanziselector.h"
#include "ui_formhanziselector.h"
#include "formhanzitable.h"

FormHanziSelector::FormHanziSelector(KeyBoard *keyboard) :
    PadBase(keyboard, NULL),
    ui(new Ui::FormHanziSelector),
    _table(NULL),
    m_hm( "/etc/py_mb.freq.db" )
{
    ui->setupUi(this);
    keyBoard()->stackedWidget_Normal_Header->addWidget(this);

    _header.push_back(ui->toolButton_showHanzi_1);
    _header.push_back(ui->toolButton_showHanzi_2);
    _header.push_back(ui->toolButton_showHanzi_3);
    _header.push_back(ui->toolButton_showHanzi_4);
    _header.push_back(ui->toolButton_showHanzi_5);
    _header.push_back(ui->toolButton_showHanzi_6);

    for (std::vector<QToolButton *>::iterator it = _header.begin(); it != _header.end(); it++)
        connectMapper(*it);

    // 下拉按钮
    ui->toolButton_pagedown->setEnabled(false);

    // 汉字下拉列表
    _table = new FormHanziTable(this);
    keyBoard()->stackedWidget_Normal->addWidget(_table);
}

FormHanziSelector::~FormHanziSelector()
{
    delete ui;
}

void FormHanziSelector::onSetChar(const QString &s)
{
    PadBase::onSetChar(s);

    // 汉字列表状态重置
    reset();
}

void FormHanziSelector::activate(bool bActive)
{
    if (bActive)
    {
        clearBtnHanzi();
        keyBoard()->stackedWidget_Normal_Header->setCurrentWidget(this);
    }
    else
        keyBoard()->stackedWidget_Normal_Header->setCurrentWidget(keyBoard()->pageNormalHeader_Num);
    //
    keyBoard()->toolButton_capslock->setEnabled(!bActive);
}

void FormHanziSelector::setPinyin(const std::string &pinyin)
{
    ui->label_pinyin->setText( pinyin.c_str() );
    const std::vector<QString> *v = m_hm.setPinyin(pinyin);
    bool existHanzi = ( v != NULL && !v->empty() );
    if (existHanzi)
    {
        setBtnHanzi( *v );
    }
}

void FormHanziSelector::pushBackPinyinString(const std::string &s)
{
    if (s == " ")
        PadBase::onSetChar(QString(" "));
    else
    {
        _preText += s;
        setPinyin(_preText);
    }
}
void FormHanziSelector::popBackPinyinChar()
{
    _preText.resize(_preText.size() - 1);
    setPinyin(_preText);
}

void FormHanziSelector::reset()
{
    clearBtnHanzi();
}

// 隐藏下拉汉字列表
void FormHanziSelector::hideTable()
{
    QWidget *curWidget = keyBoard()->stackedWidget_Normal->currentWidget();
    if (curWidget == _table)
        onPageDown();
}

void FormHanziSelector::onPageDown()
{
    QWidget *curWidget = keyBoard()->stackedWidget_Normal->currentWidget();
    if (curWidget == _table)
    {
        keyBoard()->stackedWidget_Normal->setCurrentWidget(keyBoard()->page_Qwerty_Board);
        QIcon icon;
        icon.addFile(":/new/keypad/picture/keypad/br_down.png");
        ui->toolButton_pagedown->setIcon(icon);
    }
    else
    {
        const std::vector<QString> *v = m_hm.currentHanziList();
        assert(v != NULL);

        keyBoard()->stackedWidget_Normal->setCurrentWidget(_table);
        _table->setHanziTable(&(*v)[0] + _header.size(), &(*v)[0] + v->size());
        QIcon icon;
        icon.addFile(":/new/keypad/picture/keypad/br_up.png");
        ui->toolButton_pagedown->setIcon(icon);
    }
}

void FormHanziSelector::setMapper()
{
    for (std::vector<QToolButton *>::iterator it = _header.begin(); it != _header.end(); it++)
        setMapping(*it);
}

void FormHanziSelector::clearBtnHanzi()
{
    _preText = "";
    ui->label_pinyin->setText("");
    for (std::vector<QToolButton *>::iterator it = _header.begin(); it != _header.end(); it++)
    {
        (*it)->setText( "" );
    }
    setMapper();
    hideTable();
    ui->toolButton_pagedown->setEnabled(false);
}

// 设置_header的汉字
void FormHanziSelector::setBtnHanzi(const std::vector<QString> &v)
{
    const size_t pageOfNum = _header.size();

    for( size_t i = 0; i < v.size() && i < pageOfNum; ++i )
    {
        _header[i]->setEnabled(true);
        _header[i]->setText(v[i]);
    }
    for( size_t i = v.size() ; i < pageOfNum; ++i )
    {
        _header[i]->setEnabled(false);
        _header[i]->setText( "" );
    }
    if( !v.empty())
    {
        setMapper();
    }

    ui->toolButton_pagedown->setEnabled(v.size() > pageOfNum);
}
