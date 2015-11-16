/********************************************************************************
** Form generated from reading UI file 'formnumpad.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNUMPAD_H
#define UI_FORMNUMPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormNumPad
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_Minus;
    QToolButton *toolButton_Line;
    QToolButton *toolButton_Colon;
    QToolButton *toolButton_Plus;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QToolButton *toolButton_BackSpace;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_Dot;
    QToolButton *toolButton_1;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_Comma;
    QToolButton *toolButton_0;
    QToolButton *toolButton_Space;
    QToolButton *toolButton_Enter;
    QToolButton *toolButton_Symbol;
    QToolButton *toolButton_Return;

    void setupUi(QWidget *FormNumPad)
    {
        if (FormNumPad->objectName().isEmpty())
            FormNumPad->setObjectName(QString::fromUtf8("FormNumPad"));
        FormNumPad->resize(723, 401);
        FormNumPad->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150);  "));
        gridLayout = new QGridLayout(FormNumPad);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButton_Minus = new QToolButton(FormNumPad);
        toolButton_Minus->setObjectName(QString::fromUtf8("toolButton_Minus"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_Minus->sizePolicy().hasHeightForWidth());
        toolButton_Minus->setSizePolicy(sizePolicy);
        toolButton_Minus->setFocusPolicy(Qt::NoFocus);
        toolButton_Minus->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150);  "));

        verticalLayout->addWidget(toolButton_Minus);

        toolButton_Line = new QToolButton(FormNumPad);
        toolButton_Line->setObjectName(QString::fromUtf8("toolButton_Line"));
        sizePolicy.setHeightForWidth(toolButton_Line->sizePolicy().hasHeightForWidth());
        toolButton_Line->setSizePolicy(sizePolicy);
        toolButton_Line->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(toolButton_Line);

        toolButton_Colon = new QToolButton(FormNumPad);
        toolButton_Colon->setObjectName(QString::fromUtf8("toolButton_Colon"));
        sizePolicy.setHeightForWidth(toolButton_Colon->sizePolicy().hasHeightForWidth());
        toolButton_Colon->setSizePolicy(sizePolicy);
        toolButton_Colon->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(toolButton_Colon);

        toolButton_Plus = new QToolButton(FormNumPad);
        toolButton_Plus->setObjectName(QString::fromUtf8("toolButton_Plus"));
        sizePolicy.setHeightForWidth(toolButton_Plus->sizePolicy().hasHeightForWidth());
        toolButton_Plus->setSizePolicy(sizePolicy);
        toolButton_Plus->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(toolButton_Plus);


        gridLayout->addLayout(verticalLayout, 0, 0, 3, 1);

        toolButton_7 = new QToolButton(FormNumPad);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        sizePolicy.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy);
        toolButton_7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_7, 0, 1, 1, 1);

        toolButton_8 = new QToolButton(FormNumPad);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        sizePolicy.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy);
        toolButton_8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_8, 0, 2, 1, 1);

        toolButton_9 = new QToolButton(FormNumPad);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        sizePolicy.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy);
        toolButton_9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_9, 0, 3, 1, 1);

        toolButton_BackSpace = new QToolButton(FormNumPad);
        toolButton_BackSpace->setObjectName(QString::fromUtf8("toolButton_BackSpace"));
        sizePolicy.setHeightForWidth(toolButton_BackSpace->sizePolicy().hasHeightForWidth());
        toolButton_BackSpace->setSizePolicy(sizePolicy);
        toolButton_BackSpace->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/keypad/picture/keypad/backspace.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_BackSpace->setIcon(icon);
        toolButton_BackSpace->setIconSize(QSize(24, 24));

        gridLayout->addWidget(toolButton_BackSpace, 0, 4, 1, 1);

        toolButton_4 = new QToolButton(FormNumPad);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        sizePolicy.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy);
        toolButton_4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_4, 1, 1, 1, 1);

        toolButton_5 = new QToolButton(FormNumPad);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_5, 1, 2, 1, 1);

        toolButton_6 = new QToolButton(FormNumPad);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        sizePolicy.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy);
        toolButton_6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_6, 1, 3, 1, 1);

        toolButton_Dot = new QToolButton(FormNumPad);
        toolButton_Dot->setObjectName(QString::fromUtf8("toolButton_Dot"));
        sizePolicy.setHeightForWidth(toolButton_Dot->sizePolicy().hasHeightForWidth());
        toolButton_Dot->setSizePolicy(sizePolicy);
        toolButton_Dot->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_Dot, 1, 4, 1, 1);

        toolButton_1 = new QToolButton(FormNumPad);
        toolButton_1->setObjectName(QString::fromUtf8("toolButton_1"));
        sizePolicy.setHeightForWidth(toolButton_1->sizePolicy().hasHeightForWidth());
        toolButton_1->setSizePolicy(sizePolicy);
        toolButton_1->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_1, 2, 1, 1, 1);

        toolButton_2 = new QToolButton(FormNumPad);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        toolButton_2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_2, 2, 2, 1, 1);

        toolButton_3 = new QToolButton(FormNumPad);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_3, 2, 3, 1, 1);

        toolButton_Comma = new QToolButton(FormNumPad);
        toolButton_Comma->setObjectName(QString::fromUtf8("toolButton_Comma"));
        sizePolicy.setHeightForWidth(toolButton_Comma->sizePolicy().hasHeightForWidth());
        toolButton_Comma->setSizePolicy(sizePolicy);
        toolButton_Comma->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_Comma, 2, 4, 1, 1);

        toolButton_0 = new QToolButton(FormNumPad);
        toolButton_0->setObjectName(QString::fromUtf8("toolButton_0"));
        sizePolicy.setHeightForWidth(toolButton_0->sizePolicy().hasHeightForWidth());
        toolButton_0->setSizePolicy(sizePolicy);
        toolButton_0->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_0, 4, 2, 1, 1);

        toolButton_Space = new QToolButton(FormNumPad);
        toolButton_Space->setObjectName(QString::fromUtf8("toolButton_Space"));
        sizePolicy.setHeightForWidth(toolButton_Space->sizePolicy().hasHeightForWidth());
        toolButton_Space->setSizePolicy(sizePolicy);
        toolButton_Space->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_Space, 4, 3, 1, 1);

        toolButton_Enter = new QToolButton(FormNumPad);
        toolButton_Enter->setObjectName(QString::fromUtf8("toolButton_Enter"));
        sizePolicy.setHeightForWidth(toolButton_Enter->sizePolicy().hasHeightForWidth());
        toolButton_Enter->setSizePolicy(sizePolicy);
        toolButton_Enter->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_Enter, 4, 4, 1, 1);

        toolButton_Symbol = new QToolButton(FormNumPad);
        toolButton_Symbol->setObjectName(QString::fromUtf8("toolButton_Symbol"));
        sizePolicy.setHeightForWidth(toolButton_Symbol->sizePolicy().hasHeightForWidth());
        toolButton_Symbol->setSizePolicy(sizePolicy);
        toolButton_Symbol->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_Symbol, 4, 1, 1, 1);

        toolButton_Return = new QToolButton(FormNumPad);
        toolButton_Return->setObjectName(QString::fromUtf8("toolButton_Return"));
        sizePolicy.setHeightForWidth(toolButton_Return->sizePolicy().hasHeightForWidth());
        toolButton_Return->setSizePolicy(sizePolicy);
        toolButton_Return->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/keypad/picture/keypad/f0e2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Return->setIcon(icon1);
        toolButton_Return->setIconSize(QSize(32, 32));

        gridLayout->addWidget(toolButton_Return, 4, 0, 1, 1);


        retranslateUi(FormNumPad);

        QMetaObject::connectSlotsByName(FormNumPad);
    } // setupUi

    void retranslateUi(QWidget *FormNumPad)
    {
        FormNumPad->setWindowTitle(QApplication::translate("FormNumPad", "Form", 0, QApplication::UnicodeUTF8));
        toolButton_Minus->setText(QApplication::translate("FormNumPad", "-", 0, QApplication::UnicodeUTF8));
        toolButton_Line->setText(QApplication::translate("FormNumPad", "/", 0, QApplication::UnicodeUTF8));
        toolButton_Colon->setText(QApplication::translate("FormNumPad", ":", 0, QApplication::UnicodeUTF8));
        toolButton_Plus->setText(QApplication::translate("FormNumPad", "+", 0, QApplication::UnicodeUTF8));
        toolButton_7->setText(QApplication::translate("FormNumPad", "7", 0, QApplication::UnicodeUTF8));
        toolButton_8->setText(QApplication::translate("FormNumPad", "8", 0, QApplication::UnicodeUTF8));
        toolButton_9->setText(QApplication::translate("FormNumPad", "9", 0, QApplication::UnicodeUTF8));
        toolButton_BackSpace->setText(QApplication::translate("FormNumPad", "...", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("FormNumPad", "4", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("FormNumPad", "5", 0, QApplication::UnicodeUTF8));
        toolButton_6->setText(QApplication::translate("FormNumPad", "6", 0, QApplication::UnicodeUTF8));
        toolButton_Dot->setText(QApplication::translate("FormNumPad", ".", 0, QApplication::UnicodeUTF8));
        toolButton_1->setText(QApplication::translate("FormNumPad", "1", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("FormNumPad", "2", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("FormNumPad", "3", 0, QApplication::UnicodeUTF8));
        toolButton_Comma->setText(QApplication::translate("FormNumPad", ",", 0, QApplication::UnicodeUTF8));
        toolButton_0->setText(QApplication::translate("FormNumPad", "0", 0, QApplication::UnicodeUTF8));
        toolButton_Space->setText(QApplication::translate("FormNumPad", "\347\251\272\346\240\274", 0, QApplication::UnicodeUTF8));
        toolButton_Enter->setText(QApplication::translate("FormNumPad", "\345\233\236\350\275\246", 0, QApplication::UnicodeUTF8));
        toolButton_Symbol->setText(QApplication::translate("FormNumPad", "\347\254\246", 0, QApplication::UnicodeUTF8));
        toolButton_Return->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormNumPad: public Ui_FormNumPad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNUMPAD_H
