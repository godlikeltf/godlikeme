#ifndef FORMHANZISELECTOR_H
#define FORMHANZISELECTOR_H

#include <vector>
#include <string>
#include <QString>

#include "padbase.h"
#include "HanziManager.h"

class FormHanziTable;

namespace Ui {
class FormHanziSelector;
}

class FormHanziSelector : public PadBase
{
    friend class FormHanziTable;
    Q_OBJECT
    
public:
    explicit FormHanziSelector(KeyBoard *keyboard);
    ~FormHanziSelector();
    
    void activate(bool bActive);

    void pushBackPinyinString(const std::string &s);
    void popBackPinyinChar();
    void reset();

    const std::string &pinyin() const
    {
        return _preText;
    }

private:
    void clearBtnHanzi();
    void setBtnHanzi(const std::vector< QString > &v);

    void setMapper();
    void setPinyin(const std::string &pinyin);

    // 隐藏下拉汉字列表
    void hideTable();

private slots:
    void onPageDown();
    virtual void onSetChar(const QString &);

private:
    Ui::FormHanziSelector *ui;

    // 首选汉字
    std::vector<QToolButton	*> _header;
    // 汉字下拉列表
    FormHanziTable *_table;

    HanziManage	m_hm;

    // 拼音
    std::string _preText;
};

#endif // FORMHANZISELECTOR_H
