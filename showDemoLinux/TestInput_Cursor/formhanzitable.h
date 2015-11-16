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

// ���ֱ�
// ���������б�
class FormHanziTable : public QWidget
{
    Q_OBJECT
    
public:
    explicit FormHanziTable(FormHanziSelector *parent = 0);
    ~FormHanziTable();
    
    void setHanziTable(const QString *v, const QString *vEnd);
private:
    Ui::FormHanziTable *ui;

    // ��ǰ���еĺ���
    const QString *_hanzi, *_hanziEnd;

    // ��ǰҳ��, �Լ�ҳ�е�����Button
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
