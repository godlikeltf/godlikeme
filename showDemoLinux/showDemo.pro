#-------------------------------------------------
#
# Project created by QtCreator 2015-11-11T15:50:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = showDemo
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    qextserialport.cpp \
    TestInput_Cursor/padbase.cpp \
    TestInput_Cursor/keyboard.cpp \
    TestInput_Cursor/inputmethod.cpp \
    TestInput_Cursor/HanziManager.cpp \
    TestInput_Cursor/formsymbolpad.cpp \
    TestInput_Cursor/formnumpad.cpp \
    TestInput_Cursor/formhanzitable.cpp \
    TestInput_Cursor/formhanziselector.cpp \
    TestInput_Cursor/dialogtooltip.cpp

HEADERS  += widget.h \
    posix_qextserialport.h \
    qextserialbase.h \
    qextserialport.h \
    TestInput_Cursor/keyboard.h \
    TestInput_Cursor/inputmethod.h \
    TestInput_Cursor/HanziManager.h \
    TestInput_Cursor/formsymbolpad.h \
    TestInput_Cursor/formnumpad.h \
    TestInput_Cursor/formhanzitable.h \
    TestInput_Cursor/formhanziselector.h \
    TestInput_Cursor/dialogtooltip.h \
    TestInput_Cursor/ChineseTranslator.h \
    TestInput_Cursor/padbase.h

FORMS    += widget.ui \
    TestInput_Cursor/keyboard.ui \
    TestInput_Cursor/formsymbolpad.ui \
    TestInput_Cursor/formnumpad.ui \
    TestInput_Cursor/formhanzitable.ui \
    TestInput_Cursor/formhanziselector.ui \
    TestInput_Cursor/dialogtooltip.ui

OTHER_FILES += \
    TestInput_Cursor/HanziFreq.txt

RESOURCES += \
    TestInput_Cursor/keypad.qrc
