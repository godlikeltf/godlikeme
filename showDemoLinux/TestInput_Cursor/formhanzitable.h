#ifndef FORMHANZITABLE_H
#define FORMHANZITABLE_H

#include <QWidget>
#include <string>
#include <vector>
#include <memory>

class QToolButton;
class QSignalMapper;
class FormHanziSelector;

namespace Ui {
class FormHanziTable;
}

// 汉字表
// 下拉汉字列表
class FormHanziTable : public QWidget
{
    Q_OBJECT
    
public:
    explicit FormHanziTable(FormHanziSelector *parent = 0);
    ~FormHanziTable();
    
    void setHanziTable(const QString *v, const QString *vEnd);
private:
    Ui::FormHanziTable *ui;

    // 当前所有的汉字
    const QString *_hanzi, *_hanziEnd;

    // 当前页号, 以及页中的所有Button
    int _pageNum;
    std::vector<QToolButton *> _page;

    QSignalMapper *_signalMapper;

private:
    FormHanziSelector *_hanziSelector;
    void updateUi();

    bool isEndPage() const;
    void setMapper();

private slots:
    void onPageUp();
    void onPageDown();
    void setHanziText(const QString &s);
};

#endif // FORMHANZITABLE_H
