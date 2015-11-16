/********************************************************************************
** Form generated from reading UI file 'dialogtooltip.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTOOLTIP_H
#define UI_DIALOGTOOLTIP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogToolTip
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QDialog *DialogToolTip)
    {
        if (DialogToolTip->objectName().isEmpty())
            DialogToolTip->setObjectName(QString::fromUtf8("DialogToolTip"));
        DialogToolTip->resize(200, 183);
        gridLayout = new QGridLayout(DialogToolTip);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogToolTip);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(72);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 72pt \"\351\273\221\344\275\223\";\n"
"color: rgb(150, 150, 150);"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DialogToolTip);

        QMetaObject::connectSlotsByName(DialogToolTip);
    } // setupUi

    void retranslateUi(QDialog *DialogToolTip)
    {
        DialogToolTip->setWindowTitle(QApplication::translate("DialogToolTip", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogToolTip", "A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogToolTip: public Ui_DialogToolTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTOOLTIP_H
