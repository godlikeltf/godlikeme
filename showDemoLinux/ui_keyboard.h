/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyBoard
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *pageNormal;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget_Normal;
    QWidget *page_Qwerty_Board;
    QGridLayout *gridLayout;
    QHBoxLayout *layout_Normal_Row02;
    QToolButton *toolButton_q;
    QToolButton *toolButton_w;
    QToolButton *toolButton_e;
    QToolButton *toolButton_r;
    QToolButton *toolButton_t;
    QToolButton *toolButton_y;
    QToolButton *toolButton_u;
    QToolButton *toolButton_i;
    QToolButton *toolButton_o;
    QToolButton *toolButton_p;
    QHBoxLayout *layout_Normal_Row04;
    QToolButton *toolButton_capslock;
    QToolButton *toolButton_z;
    QToolButton *toolButton_x;
    QToolButton *toolButton_c;
    QToolButton *toolButton_v;
    QToolButton *toolButton_b;
    QToolButton *toolButton_n;
    QToolButton *toolButton_m;
    QToolButton *toolButton_backspace;
    QHBoxLayout *layout_Normal_Row05;
    QToolButton *toolButton_SymbolPad;
    QToolButton *toolButton_NumPad;
    QLabel *label_space_left;
    QToolButton *toolButton_space;
    QLabel *label_space_right;
    QToolButton *toolButton_znen;
    QToolButton *toolButton_Enter;
    QToolButton *toolButton_hide;
    QHBoxLayout *layout_Normal_Row03;
    QLabel *label_asdf_left;
    QToolButton *toolButton_a;
    QToolButton *toolButton_s;
    QToolButton *toolButton_d;
    QToolButton *toolButton_f;
    QToolButton *toolButton_g;
    QToolButton *toolButton_h;
    QToolButton *toolButton_j;
    QToolButton *toolButton_k;
    QToolButton *toolButton_l;
    QLabel *label_hjkl_right;
    QStackedWidget *stackedWidget_Normal_Header;
    QWidget *pageNormalHeader_Num;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_1;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QToolButton *toolButton_0;

    void setupUi(QDialog *KeyBoard)
    {
        if (KeyBoard->objectName().isEmpty())
            KeyBoard->setObjectName(QString::fromUtf8("KeyBoard"));
        KeyBoard->resize(802, 262);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        KeyBoard->setFont(font);
        KeyBoard->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 255);"));
        gridLayout_2 = new QGridLayout(KeyBoard);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(KeyBoard);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(150, 150, 150);\n"
"border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(51, 153, 255);  "));
        pageNormal = new QWidget();
        pageNormal->setObjectName(QString::fromUtf8("pageNormal"));
        gridLayout_4 = new QGridLayout(pageNormal);
        gridLayout_4->setSpacing(3);
        gridLayout_4->setContentsMargins(3, 3, 3, 3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stackedWidget_Normal = new QStackedWidget(pageNormal);
        stackedWidget_Normal->setObjectName(QString::fromUtf8("stackedWidget_Normal"));
        stackedWidget_Normal->setStyleSheet(QString::fromUtf8("border-width:0px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));
        page_Qwerty_Board = new QWidget();
        page_Qwerty_Board->setObjectName(QString::fromUtf8("page_Qwerty_Board"));
        gridLayout = new QGridLayout(page_Qwerty_Board);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        layout_Normal_Row02 = new QHBoxLayout();
        layout_Normal_Row02->setSpacing(2);
        layout_Normal_Row02->setObjectName(QString::fromUtf8("layout_Normal_Row02"));
        toolButton_q = new QToolButton(page_Qwerty_Board);
        toolButton_q->setObjectName(QString::fromUtf8("toolButton_q"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_q->sizePolicy().hasHeightForWidth());
        toolButton_q->setSizePolicy(sizePolicy);
        toolButton_q->setFocusPolicy(Qt::NoFocus);
        toolButton_q->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_q);

        toolButton_w = new QToolButton(page_Qwerty_Board);
        toolButton_w->setObjectName(QString::fromUtf8("toolButton_w"));
        sizePolicy.setHeightForWidth(toolButton_w->sizePolicy().hasHeightForWidth());
        toolButton_w->setSizePolicy(sizePolicy);
        toolButton_w->setFocusPolicy(Qt::NoFocus);
        toolButton_w->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_w);

        toolButton_e = new QToolButton(page_Qwerty_Board);
        toolButton_e->setObjectName(QString::fromUtf8("toolButton_e"));
        sizePolicy.setHeightForWidth(toolButton_e->sizePolicy().hasHeightForWidth());
        toolButton_e->setSizePolicy(sizePolicy);
        toolButton_e->setFocusPolicy(Qt::NoFocus);
        toolButton_e->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_e);

        toolButton_r = new QToolButton(page_Qwerty_Board);
        toolButton_r->setObjectName(QString::fromUtf8("toolButton_r"));
        sizePolicy.setHeightForWidth(toolButton_r->sizePolicy().hasHeightForWidth());
        toolButton_r->setSizePolicy(sizePolicy);
        toolButton_r->setFocusPolicy(Qt::NoFocus);
        toolButton_r->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_r);

        toolButton_t = new QToolButton(page_Qwerty_Board);
        toolButton_t->setObjectName(QString::fromUtf8("toolButton_t"));
        sizePolicy.setHeightForWidth(toolButton_t->sizePolicy().hasHeightForWidth());
        toolButton_t->setSizePolicy(sizePolicy);
        toolButton_t->setFocusPolicy(Qt::NoFocus);
        toolButton_t->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_t);

        toolButton_y = new QToolButton(page_Qwerty_Board);
        toolButton_y->setObjectName(QString::fromUtf8("toolButton_y"));
        sizePolicy.setHeightForWidth(toolButton_y->sizePolicy().hasHeightForWidth());
        toolButton_y->setSizePolicy(sizePolicy);
        toolButton_y->setFocusPolicy(Qt::NoFocus);
        toolButton_y->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_y);

        toolButton_u = new QToolButton(page_Qwerty_Board);
        toolButton_u->setObjectName(QString::fromUtf8("toolButton_u"));
        sizePolicy.setHeightForWidth(toolButton_u->sizePolicy().hasHeightForWidth());
        toolButton_u->setSizePolicy(sizePolicy);
        toolButton_u->setFocusPolicy(Qt::NoFocus);
        toolButton_u->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_u);

        toolButton_i = new QToolButton(page_Qwerty_Board);
        toolButton_i->setObjectName(QString::fromUtf8("toolButton_i"));
        sizePolicy.setHeightForWidth(toolButton_i->sizePolicy().hasHeightForWidth());
        toolButton_i->setSizePolicy(sizePolicy);
        toolButton_i->setFocusPolicy(Qt::NoFocus);
        toolButton_i->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_i);

        toolButton_o = new QToolButton(page_Qwerty_Board);
        toolButton_o->setObjectName(QString::fromUtf8("toolButton_o"));
        sizePolicy.setHeightForWidth(toolButton_o->sizePolicy().hasHeightForWidth());
        toolButton_o->setSizePolicy(sizePolicy);
        toolButton_o->setFocusPolicy(Qt::NoFocus);
        toolButton_o->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_o);

        toolButton_p = new QToolButton(page_Qwerty_Board);
        toolButton_p->setObjectName(QString::fromUtf8("toolButton_p"));
        sizePolicy.setHeightForWidth(toolButton_p->sizePolicy().hasHeightForWidth());
        toolButton_p->setSizePolicy(sizePolicy);
        toolButton_p->setFocusPolicy(Qt::NoFocus);
        toolButton_p->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row02->addWidget(toolButton_p);


        gridLayout->addLayout(layout_Normal_Row02, 0, 0, 1, 1);

        layout_Normal_Row04 = new QHBoxLayout();
        layout_Normal_Row04->setSpacing(2);
        layout_Normal_Row04->setObjectName(QString::fromUtf8("layout_Normal_Row04"));
        toolButton_capslock = new QToolButton(page_Qwerty_Board);
        toolButton_capslock->setObjectName(QString::fromUtf8("toolButton_capslock"));
        sizePolicy.setHeightForWidth(toolButton_capslock->sizePolicy().hasHeightForWidth());
        toolButton_capslock->setSizePolicy(sizePolicy);
        toolButton_capslock->setFocusPolicy(Qt::NoFocus);
        toolButton_capslock->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));
        toolButton_capslock->setIconSize(QSize(24, 24));

        layout_Normal_Row04->addWidget(toolButton_capslock);

        toolButton_z = new QToolButton(page_Qwerty_Board);
        toolButton_z->setObjectName(QString::fromUtf8("toolButton_z"));
        sizePolicy.setHeightForWidth(toolButton_z->sizePolicy().hasHeightForWidth());
        toolButton_z->setSizePolicy(sizePolicy);
        toolButton_z->setFocusPolicy(Qt::NoFocus);
        toolButton_z->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_z);

        toolButton_x = new QToolButton(page_Qwerty_Board);
        toolButton_x->setObjectName(QString::fromUtf8("toolButton_x"));
        sizePolicy.setHeightForWidth(toolButton_x->sizePolicy().hasHeightForWidth());
        toolButton_x->setSizePolicy(sizePolicy);
        toolButton_x->setFocusPolicy(Qt::NoFocus);
        toolButton_x->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_x);

        toolButton_c = new QToolButton(page_Qwerty_Board);
        toolButton_c->setObjectName(QString::fromUtf8("toolButton_c"));
        sizePolicy.setHeightForWidth(toolButton_c->sizePolicy().hasHeightForWidth());
        toolButton_c->setSizePolicy(sizePolicy);
        toolButton_c->setFocusPolicy(Qt::NoFocus);
        toolButton_c->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_c);

        toolButton_v = new QToolButton(page_Qwerty_Board);
        toolButton_v->setObjectName(QString::fromUtf8("toolButton_v"));
        sizePolicy.setHeightForWidth(toolButton_v->sizePolicy().hasHeightForWidth());
        toolButton_v->setSizePolicy(sizePolicy);
        toolButton_v->setFocusPolicy(Qt::NoFocus);
        toolButton_v->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_v);

        toolButton_b = new QToolButton(page_Qwerty_Board);
        toolButton_b->setObjectName(QString::fromUtf8("toolButton_b"));
        sizePolicy.setHeightForWidth(toolButton_b->sizePolicy().hasHeightForWidth());
        toolButton_b->setSizePolicy(sizePolicy);
        toolButton_b->setFocusPolicy(Qt::NoFocus);
        toolButton_b->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_b);

        toolButton_n = new QToolButton(page_Qwerty_Board);
        toolButton_n->setObjectName(QString::fromUtf8("toolButton_n"));
        sizePolicy.setHeightForWidth(toolButton_n->sizePolicy().hasHeightForWidth());
        toolButton_n->setSizePolicy(sizePolicy);
        toolButton_n->setFocusPolicy(Qt::NoFocus);
        toolButton_n->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_n);

        toolButton_m = new QToolButton(page_Qwerty_Board);
        toolButton_m->setObjectName(QString::fromUtf8("toolButton_m"));
        sizePolicy.setHeightForWidth(toolButton_m->sizePolicy().hasHeightForWidth());
        toolButton_m->setSizePolicy(sizePolicy);
        toolButton_m->setFocusPolicy(Qt::NoFocus);
        toolButton_m->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row04->addWidget(toolButton_m);

        toolButton_backspace = new QToolButton(page_Qwerty_Board);
        toolButton_backspace->setObjectName(QString::fromUtf8("toolButton_backspace"));
        sizePolicy.setHeightForWidth(toolButton_backspace->sizePolicy().hasHeightForWidth());
        toolButton_backspace->setSizePolicy(sizePolicy);
        toolButton_backspace->setFocusPolicy(Qt::NoFocus);
        toolButton_backspace->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/keypad/picture/keypad/backspace.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_backspace->setIcon(icon);
        toolButton_backspace->setIconSize(QSize(24, 24));
        toolButton_backspace->setToolButtonStyle(Qt::ToolButtonIconOnly);

        layout_Normal_Row04->addWidget(toolButton_backspace);

        layout_Normal_Row04->setStretch(0, 15);
        layout_Normal_Row04->setStretch(1, 10);
        layout_Normal_Row04->setStretch(2, 10);
        layout_Normal_Row04->setStretch(3, 10);
        layout_Normal_Row04->setStretch(4, 10);
        layout_Normal_Row04->setStretch(5, 10);
        layout_Normal_Row04->setStretch(6, 10);
        layout_Normal_Row04->setStretch(7, 10);
        layout_Normal_Row04->setStretch(8, 20);

        gridLayout->addLayout(layout_Normal_Row04, 2, 0, 1, 1);

        layout_Normal_Row05 = new QHBoxLayout();
        layout_Normal_Row05->setSpacing(5);
        layout_Normal_Row05->setObjectName(QString::fromUtf8("layout_Normal_Row05"));
        toolButton_SymbolPad = new QToolButton(page_Qwerty_Board);
        toolButton_SymbolPad->setObjectName(QString::fromUtf8("toolButton_SymbolPad"));
        sizePolicy.setHeightForWidth(toolButton_SymbolPad->sizePolicy().hasHeightForWidth());
        toolButton_SymbolPad->setSizePolicy(sizePolicy);
        toolButton_SymbolPad->setFocusPolicy(Qt::NoFocus);
        toolButton_SymbolPad->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row05->addWidget(toolButton_SymbolPad);

        toolButton_NumPad = new QToolButton(page_Qwerty_Board);
        toolButton_NumPad->setObjectName(QString::fromUtf8("toolButton_NumPad"));
        sizePolicy.setHeightForWidth(toolButton_NumPad->sizePolicy().hasHeightForWidth());
        toolButton_NumPad->setSizePolicy(sizePolicy);
        toolButton_NumPad->setFocusPolicy(Qt::NoFocus);
        toolButton_NumPad->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row05->addWidget(toolButton_NumPad);

        label_space_left = new QLabel(page_Qwerty_Board);
        label_space_left->setObjectName(QString::fromUtf8("label_space_left"));
        label_space_left->setMinimumSize(QSize(20, 0));
        label_space_left->setMaximumSize(QSize(20, 16777215));

        layout_Normal_Row05->addWidget(label_space_left);

        toolButton_space = new QToolButton(page_Qwerty_Board);
        toolButton_space->setObjectName(QString::fromUtf8("toolButton_space"));
        sizePolicy.setHeightForWidth(toolButton_space->sizePolicy().hasHeightForWidth());
        toolButton_space->setSizePolicy(sizePolicy);
        toolButton_space->setFocusPolicy(Qt::NoFocus);
        toolButton_space->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row05->addWidget(toolButton_space);

        label_space_right = new QLabel(page_Qwerty_Board);
        label_space_right->setObjectName(QString::fromUtf8("label_space_right"));
        label_space_right->setMinimumSize(QSize(20, 0));
        label_space_right->setMaximumSize(QSize(20, 16777215));

        layout_Normal_Row05->addWidget(label_space_right);

        toolButton_znen = new QToolButton(page_Qwerty_Board);
        toolButton_znen->setObjectName(QString::fromUtf8("toolButton_znen"));
        sizePolicy.setHeightForWidth(toolButton_znen->sizePolicy().hasHeightForWidth());
        toolButton_znen->setSizePolicy(sizePolicy);
        toolButton_znen->setFocusPolicy(Qt::NoFocus);
        toolButton_znen->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));
        toolButton_znen->setToolButtonStyle(Qt::ToolButtonTextOnly);

        layout_Normal_Row05->addWidget(toolButton_znen);

        toolButton_Enter = new QToolButton(page_Qwerty_Board);
        toolButton_Enter->setObjectName(QString::fromUtf8("toolButton_Enter"));
        sizePolicy.setHeightForWidth(toolButton_Enter->sizePolicy().hasHeightForWidth());
        toolButton_Enter->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        toolButton_Enter->setFont(font1);
        toolButton_Enter->setFocusPolicy(Qt::NoFocus);
        toolButton_Enter->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row05->addWidget(toolButton_Enter);

        toolButton_hide = new QToolButton(page_Qwerty_Board);
        toolButton_hide->setObjectName(QString::fromUtf8("toolButton_hide"));
        sizePolicy.setHeightForWidth(toolButton_hide->sizePolicy().hasHeightForWidth());
        toolButton_hide->setSizePolicy(sizePolicy);
        toolButton_hide->setFocusPolicy(Qt::NoFocus);
        toolButton_hide->setStyleSheet(QString::fromUtf8("background-color: rgb(255,102, 102);\n"
"color: rgb(248, 248, 255);"));
        toolButton_hide->setIconSize(QSize(36, 36));

        layout_Normal_Row05->addWidget(toolButton_hide);

        layout_Normal_Row05->setStretch(0, 10);
        layout_Normal_Row05->setStretch(1, 10);
        layout_Normal_Row05->setStretch(3, 30);
        layout_Normal_Row05->setStretch(5, 10);
        layout_Normal_Row05->setStretch(6, 10);
        layout_Normal_Row05->setStretch(7, 10);

        gridLayout->addLayout(layout_Normal_Row05, 3, 0, 1, 1);

        layout_Normal_Row03 = new QHBoxLayout();
        layout_Normal_Row03->setSpacing(2);
        layout_Normal_Row03->setObjectName(QString::fromUtf8("layout_Normal_Row03"));
        label_asdf_left = new QLabel(page_Qwerty_Board);
        label_asdf_left->setObjectName(QString::fromUtf8("label_asdf_left"));
        label_asdf_left->setMaximumSize(QSize(25, 16777215));

        layout_Normal_Row03->addWidget(label_asdf_left);

        toolButton_a = new QToolButton(page_Qwerty_Board);
        toolButton_a->setObjectName(QString::fromUtf8("toolButton_a"));
        sizePolicy.setHeightForWidth(toolButton_a->sizePolicy().hasHeightForWidth());
        toolButton_a->setSizePolicy(sizePolicy);
        toolButton_a->setFocusPolicy(Qt::NoFocus);
        toolButton_a->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_a);

        toolButton_s = new QToolButton(page_Qwerty_Board);
        toolButton_s->setObjectName(QString::fromUtf8("toolButton_s"));
        sizePolicy.setHeightForWidth(toolButton_s->sizePolicy().hasHeightForWidth());
        toolButton_s->setSizePolicy(sizePolicy);
        toolButton_s->setFocusPolicy(Qt::NoFocus);
        toolButton_s->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_s);

        toolButton_d = new QToolButton(page_Qwerty_Board);
        toolButton_d->setObjectName(QString::fromUtf8("toolButton_d"));
        sizePolicy.setHeightForWidth(toolButton_d->sizePolicy().hasHeightForWidth());
        toolButton_d->setSizePolicy(sizePolicy);
        toolButton_d->setFocusPolicy(Qt::NoFocus);
        toolButton_d->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_d);

        toolButton_f = new QToolButton(page_Qwerty_Board);
        toolButton_f->setObjectName(QString::fromUtf8("toolButton_f"));
        sizePolicy.setHeightForWidth(toolButton_f->sizePolicy().hasHeightForWidth());
        toolButton_f->setSizePolicy(sizePolicy);
        toolButton_f->setFocusPolicy(Qt::NoFocus);
        toolButton_f->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_f);

        toolButton_g = new QToolButton(page_Qwerty_Board);
        toolButton_g->setObjectName(QString::fromUtf8("toolButton_g"));
        sizePolicy.setHeightForWidth(toolButton_g->sizePolicy().hasHeightForWidth());
        toolButton_g->setSizePolicy(sizePolicy);
        toolButton_g->setFocusPolicy(Qt::NoFocus);
        toolButton_g->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_g);

        toolButton_h = new QToolButton(page_Qwerty_Board);
        toolButton_h->setObjectName(QString::fromUtf8("toolButton_h"));
        sizePolicy.setHeightForWidth(toolButton_h->sizePolicy().hasHeightForWidth());
        toolButton_h->setSizePolicy(sizePolicy);
        toolButton_h->setFocusPolicy(Qt::NoFocus);
        toolButton_h->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_h);

        toolButton_j = new QToolButton(page_Qwerty_Board);
        toolButton_j->setObjectName(QString::fromUtf8("toolButton_j"));
        sizePolicy.setHeightForWidth(toolButton_j->sizePolicy().hasHeightForWidth());
        toolButton_j->setSizePolicy(sizePolicy);
        toolButton_j->setFocusPolicy(Qt::NoFocus);
        toolButton_j->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_j);

        toolButton_k = new QToolButton(page_Qwerty_Board);
        toolButton_k->setObjectName(QString::fromUtf8("toolButton_k"));
        sizePolicy.setHeightForWidth(toolButton_k->sizePolicy().hasHeightForWidth());
        toolButton_k->setSizePolicy(sizePolicy);
        toolButton_k->setFocusPolicy(Qt::NoFocus);
        toolButton_k->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_k);

        toolButton_l = new QToolButton(page_Qwerty_Board);
        toolButton_l->setObjectName(QString::fromUtf8("toolButton_l"));
        sizePolicy.setHeightForWidth(toolButton_l->sizePolicy().hasHeightForWidth());
        toolButton_l->setSizePolicy(sizePolicy);
        toolButton_l->setFocusPolicy(Qt::NoFocus);
        toolButton_l->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        layout_Normal_Row03->addWidget(toolButton_l);

        label_hjkl_right = new QLabel(page_Qwerty_Board);
        label_hjkl_right->setObjectName(QString::fromUtf8("label_hjkl_right"));
        label_hjkl_right->setMaximumSize(QSize(25, 16777215));

        layout_Normal_Row03->addWidget(label_hjkl_right);


        gridLayout->addLayout(layout_Normal_Row03, 1, 0, 1, 1);

        stackedWidget_Normal->addWidget(page_Qwerty_Board);

        gridLayout_4->addWidget(stackedWidget_Normal, 1, 0, 1, 1);

        stackedWidget_Normal_Header = new QStackedWidget(pageNormal);
        stackedWidget_Normal_Header->setObjectName(QString::fromUtf8("stackedWidget_Normal_Header"));
        stackedWidget_Normal_Header->setStyleSheet(QString::fromUtf8("border-width:0px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));
        pageNormalHeader_Num = new QWidget();
        pageNormalHeader_Num->setObjectName(QString::fromUtf8("pageNormalHeader_Num"));
        horizontalLayout_2 = new QHBoxLayout(pageNormalHeader_Num);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton_1 = new QToolButton(pageNormalHeader_Num);
        toolButton_1->setObjectName(QString::fromUtf8("toolButton_1"));
        sizePolicy.setHeightForWidth(toolButton_1->sizePolicy().hasHeightForWidth());
        toolButton_1->setSizePolicy(sizePolicy);
        toolButton_1->setFocusPolicy(Qt::NoFocus);
        toolButton_1->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_1);

        toolButton_2 = new QToolButton(pageNormalHeader_Num);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        toolButton_2->setFocusPolicy(Qt::NoFocus);
        toolButton_2->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(pageNormalHeader_Num);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setFocusPolicy(Qt::NoFocus);
        toolButton_3->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(pageNormalHeader_Num);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        sizePolicy.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy);
        toolButton_4->setFocusPolicy(Qt::NoFocus);
        toolButton_4->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(pageNormalHeader_Num);
        toolButton_5->setObjectName(QString::fromUtf8("toolButton_5"));
        sizePolicy.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy);
        toolButton_5->setFocusPolicy(Qt::NoFocus);
        toolButton_5->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(pageNormalHeader_Num);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        sizePolicy.setHeightForWidth(toolButton_6->sizePolicy().hasHeightForWidth());
        toolButton_6->setSizePolicy(sizePolicy);
        toolButton_6->setFocusPolicy(Qt::NoFocus);
        toolButton_6->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_6);

        toolButton_7 = new QToolButton(pageNormalHeader_Num);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        sizePolicy.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy);
        toolButton_7->setFocusPolicy(Qt::NoFocus);
        toolButton_7->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(pageNormalHeader_Num);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        sizePolicy.setHeightForWidth(toolButton_8->sizePolicy().hasHeightForWidth());
        toolButton_8->setSizePolicy(sizePolicy);
        toolButton_8->setFocusPolicy(Qt::NoFocus);
        toolButton_8->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_8);

        toolButton_9 = new QToolButton(pageNormalHeader_Num);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        sizePolicy.setHeightForWidth(toolButton_9->sizePolicy().hasHeightForWidth());
        toolButton_9->setSizePolicy(sizePolicy);
        toolButton_9->setFocusPolicy(Qt::NoFocus);
        toolButton_9->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_9);

        toolButton_0 = new QToolButton(pageNormalHeader_Num);
        toolButton_0->setObjectName(QString::fromUtf8("toolButton_0"));
        sizePolicy.setHeightForWidth(toolButton_0->sizePolicy().hasHeightForWidth());
        toolButton_0->setSizePolicy(sizePolicy);
        toolButton_0->setFocusPolicy(Qt::NoFocus);
        toolButton_0->setStyleSheet(QString::fromUtf8("border-width:1px;  \n"
"border-style:solid;\n"
"border-color: rgb(150, 150, 150); "));

        horizontalLayout_2->addWidget(toolButton_0);

        stackedWidget_Normal_Header->addWidget(pageNormalHeader_Num);

        gridLayout_4->addWidget(stackedWidget_Normal_Header, 0, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 10);
        gridLayout_4->setRowStretch(1, 50);
        stackedWidget->addWidget(pageNormal);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(KeyBoard);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_Normal->setCurrentIndex(0);
        stackedWidget_Normal_Header->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KeyBoard);
    } // setupUi

    void retranslateUi(QDialog *KeyBoard)
    {
        KeyBoard->setWindowTitle(QApplication::translate("KeyBoard", "Dialog", 0, QApplication::UnicodeUTF8));
        toolButton_q->setText(QApplication::translate("KeyBoard", "q", 0, QApplication::UnicodeUTF8));
        toolButton_w->setText(QApplication::translate("KeyBoard", "w", 0, QApplication::UnicodeUTF8));
        toolButton_e->setText(QApplication::translate("KeyBoard", "e", 0, QApplication::UnicodeUTF8));
        toolButton_r->setText(QApplication::translate("KeyBoard", "r", 0, QApplication::UnicodeUTF8));
        toolButton_t->setText(QApplication::translate("KeyBoard", "t", 0, QApplication::UnicodeUTF8));
        toolButton_y->setText(QApplication::translate("KeyBoard", "y", 0, QApplication::UnicodeUTF8));
        toolButton_u->setText(QApplication::translate("KeyBoard", "u", 0, QApplication::UnicodeUTF8));
        toolButton_i->setText(QApplication::translate("KeyBoard", "i", 0, QApplication::UnicodeUTF8));
        toolButton_o->setText(QApplication::translate("KeyBoard", "o", 0, QApplication::UnicodeUTF8));
        toolButton_p->setText(QApplication::translate("KeyBoard", "p", 0, QApplication::UnicodeUTF8));
        toolButton_capslock->setText(QApplication::translate("KeyBoard", "Caps lock", 0, QApplication::UnicodeUTF8));
        toolButton_z->setText(QApplication::translate("KeyBoard", "z", 0, QApplication::UnicodeUTF8));
        toolButton_x->setText(QApplication::translate("KeyBoard", "x", 0, QApplication::UnicodeUTF8));
        toolButton_c->setText(QApplication::translate("KeyBoard", "c", 0, QApplication::UnicodeUTF8));
        toolButton_v->setText(QApplication::translate("KeyBoard", "v", 0, QApplication::UnicodeUTF8));
        toolButton_b->setText(QApplication::translate("KeyBoard", "b", 0, QApplication::UnicodeUTF8));
        toolButton_n->setText(QApplication::translate("KeyBoard", "n", 0, QApplication::UnicodeUTF8));
        toolButton_m->setText(QApplication::translate("KeyBoard", "m", 0, QApplication::UnicodeUTF8));
        toolButton_backspace->setText(QString());
        toolButton_SymbolPad->setText(QApplication::translate("KeyBoard", "\347\254\246", 0, QApplication::UnicodeUTF8));
        toolButton_NumPad->setText(QApplication::translate("KeyBoard", "123", 0, QApplication::UnicodeUTF8));
        label_space_left->setText(QString());
        toolButton_space->setText(QApplication::translate("KeyBoard", "\347\251\272\346\240\274", 0, QApplication::UnicodeUTF8));
        label_space_right->setText(QString());
        toolButton_znen->setText(QApplication::translate("KeyBoard", "\344\270\255/EN", 0, QApplication::UnicodeUTF8));
        toolButton_Enter->setText(QApplication::translate("KeyBoard", "\345\233\236\350\275\246", 0, QApplication::UnicodeUTF8));
        toolButton_hide->setText(QApplication::translate("KeyBoard", "Esc", 0, QApplication::UnicodeUTF8));
        label_asdf_left->setText(QString());
        toolButton_a->setText(QApplication::translate("KeyBoard", "a", 0, QApplication::UnicodeUTF8));
        toolButton_s->setText(QApplication::translate("KeyBoard", "s", 0, QApplication::UnicodeUTF8));
        toolButton_d->setText(QApplication::translate("KeyBoard", "d", 0, QApplication::UnicodeUTF8));
        toolButton_f->setText(QApplication::translate("KeyBoard", "f", 0, QApplication::UnicodeUTF8));
        toolButton_g->setText(QApplication::translate("KeyBoard", "g", 0, QApplication::UnicodeUTF8));
        toolButton_h->setText(QApplication::translate("KeyBoard", "h", 0, QApplication::UnicodeUTF8));
        toolButton_j->setText(QApplication::translate("KeyBoard", "j", 0, QApplication::UnicodeUTF8));
        toolButton_k->setText(QApplication::translate("KeyBoard", "k", 0, QApplication::UnicodeUTF8));
        toolButton_l->setText(QApplication::translate("KeyBoard", "l", 0, QApplication::UnicodeUTF8));
        label_hjkl_right->setText(QString());
        toolButton_1->setText(QApplication::translate("KeyBoard", "1", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("KeyBoard", "2", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("KeyBoard", "3", 0, QApplication::UnicodeUTF8));
        toolButton_4->setText(QApplication::translate("KeyBoard", "4", 0, QApplication::UnicodeUTF8));
        toolButton_5->setText(QApplication::translate("KeyBoard", "5", 0, QApplication::UnicodeUTF8));
        toolButton_6->setText(QApplication::translate("KeyBoard", "6", 0, QApplication::UnicodeUTF8));
        toolButton_7->setText(QApplication::translate("KeyBoard", "7", 0, QApplication::UnicodeUTF8));
        toolButton_8->setText(QApplication::translate("KeyBoard", "8", 0, QApplication::UnicodeUTF8));
        toolButton_9->setText(QApplication::translate("KeyBoard", "9", 0, QApplication::UnicodeUTF8));
        toolButton_0->setText(QApplication::translate("KeyBoard", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KeyBoard: public Ui_KeyBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
