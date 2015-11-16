#include "widget.h"
#include <QApplication>
#include <QTextCodec>
#include "./TestInput_Cursor/inputmethod.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());
    Widget w;
    w.show();
    QInputContext *im = new InputMethod();
       a.setInputContext( im );
    return a.exec();
}
