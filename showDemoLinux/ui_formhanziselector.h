/********************************************************************************
** Form generated from reading UI file 'formhanziselector.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMHANZISELECTOR_H
#define UI_FORMHANZISELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormHanziSelector
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_pinyin;
    QToolButton *toolButton_showHanzi_1;
    QToolButton *toolButton_showHanzi_2;
    QToolButton *toolButton_showHanzi_3;
    QToolButton *toolButton_showHanzi_4;
    QToolButton *toolButton_showHanzi_5;
    QToolButton *toolButton_showHanzi_6;
    QToolButton *toolButton_pagedown;

    void setupUi(QWidget *FormHanziSelector)
    {
        if (FormHanziSelector->objectName().isEmpty())
            FormHanziSelector->setObjectName(QString::fromUtf8("FormHanziSelector"));
        FormHanziSelector->resize(800, 45);
        horizontalLayout = new QHBoxLayout(FormHanziSelector);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_pinyin = new QLabel(FormHanziSelector);
        label_pinyin->setObjectName(QString::fromUtf8("label_pinyin"));
        label_pinyin->setFrameShape(QFrame::Panel);
        label_pinyin->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_pinyin);

        toolButton_showHanzi_1 = new QToolButton(FormHanziSelector);
        toolButton_showHanzi_1->setObjectName(QString::fromUtf8("toolButton_showHanzi_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_showHanzi_1->sizePolicy().hasHeightForWidth());
        toolButton_showHanzi_1->setSizePolicy(sizePolicy);
        toolButton_showHanzi_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(toolButton_showHanzi_1);

        toolButton_showHanzi_2 = new QToolButton(FormHanziSelector);
        toolButton_showHanzi_2->setObjectName(QString::fromUtf8("toolButton_showHanzi_2"));
        sizePolicy.setHeightForWidth(toolButton_showHanzi_2->sizePolicy().hasHeightForWidth());
        toolButton_showHanzi_2->setSizePolicy(sizePolicy);
        toolButton_showHanzi_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(toolButton_showHanzi_2);

        toolButton_showHanzi_3 = new QToolButton(FormHanziSelector);
        toolButton_showHanzi_3->setObjectName(QString::fromUtf8("toolButton_showHanzi_3"));
        sizePolicy.setHeightForWidth(toolButton_showHanzi_3->sizePolicy().hasHeightForWidth());
        toolButton_showHanzi_3->setSizePolicy(sizePolicy);
        toolButton_showHanzi_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(toolButton_showHanzi_3);

        toolButton_showHanzi_4 = new QToolButton(FormHanziSelector);
        toolButton_showHanzi_4->setObjectName(QString::fromUtf8("toolButton_showHanzi_4"));
        sizePolicy.setHeightForWidth(toolButton_showHanzi_4->sizePolicy().hasHeightForWidth());
        toolButton_showHanzi_4->setSizePolicy(sizePolicy);
        toolButton_showHanzi_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(toolButton_showHanzi_4);

        toolButton_showHanzi_5 = new QToolButton(FormHanziSelector);
        toolButton_showHanzi_5->setObjectName(QString::fromUtf8("toolButton_showHanzi_5"));
        sizePolicy.setHeightForWidth(toolButton_showHanzi_5->sizePolicy().hasHeightForWidth());
        toolButton_showHanzi_5->setSizePolicy(sizePolicy);
        toolButton_showHanzi_5->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(toolButton_showHanzi_5);

        toolButton_showHanzi_6 = new QToolButton(FormHanziSelector);
        toolButton_showHanzi_6->setObjectName(QString::fromUtf8("toolButton_showHanzi_6"));
        sizePolicy.setHeightForWidth(toolButton_showHanzi_6->sizePolicy().hasHeightForWidth());
        toolButton_showHanzi_6->setSizePolicy(sizePolicy);
        toolButton_showHanzi_6->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(toolButton_showHanzi_6);

        toolButton_pagedown = new QToolButton(FormHanziSelector);
        toolButton_pagedown->setObjectName(QString::fromUtf8("toolButton_pagedown"));
        sizePolicy.setHeightForWidth(toolButton_pagedown->sizePolicy().hasHeightForWidth());
        toolButton_pagedown->setSizePolicy(sizePolicy);
        toolButton_pagedown->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/keypad/picture/keypad/br_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_pagedown->setIcon(icon);
        toolButton_pagedown->setIconSize(QSize(24, 24));
        toolButton_pagedown->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(toolButton_pagedown);

        horizontalLayout->setStretch(0, 15);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 10);
        horizontalLayout->setStretch(3, 10);
        horizontalLayout->setStretch(4, 10);
        horizontalLayout->setStretch(5, 10);
        horizontalLayout->setStretch(6, 10);
        horizontalLayout->setStretch(7, 10);

        retranslateUi(FormHanziSelector);
        QObject::connect(toolButton_pagedown, SIGNAL(clicked()), FormHanziSelector, SLOT(onPageDown()));

        QMetaObject::connectSlotsByName(FormHanziSelector);
    } // setupUi

    void retranslateUi(QWidget *FormHanziSelector)
    {
        FormHanziSelector->setWindowTitle(QApplication::translate("FormHanziSelector", "Form", 0, QApplication::UnicodeUTF8));
        label_pinyin->setText(QApplication::translate("FormHanziSelector", "chuang", 0, QApplication::UnicodeUTF8));
        toolButton_showHanzi_1->setText(QString());
        toolButton_showHanzi_2->setText(QString());
        toolButton_showHanzi_3->setText(QString());
        toolButton_showHanzi_4->setText(QString());
        toolButton_showHanzi_5->setText(QString());
        toolButton_showHanzi_6->setText(QString());
        toolButton_pagedown->setText(QApplication::translate("FormHanziSelector", ">>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormHanziSelector: public Ui_FormHanziSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMHANZISELECTOR_H
