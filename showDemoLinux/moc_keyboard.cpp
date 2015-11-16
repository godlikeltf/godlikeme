/****************************************************************************
** Meta object code from reading C++ file 'keyboard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TestInput_Cursor/keyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_KeyBoard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      43,   36,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   71,    9,    9, 0x0a,
      97,   71,    9,    9, 0x0a,
     119,    9,    9,    9, 0x0a,
     132,    9,    9,    9, 0x0a,
     146,    9,    9,    9, 0x0a,
     154,    9,    9,    9, 0x0a,
     176,  168,    9,    9, 0x0a,
     193,    9,    9,    9, 0x0a,
     206,    9,    9,    9, 0x0a,
     233,  222,    9,    9, 0x0a,
     252,    9,    9,    9, 0x0a,
     282,  264,    9,    9, 0x0a,
     317,    9,    9,    9, 0x0a,
     343,    9,    9,    9, 0x0a,
     369,    9,    9,    9, 0x0a,
     389,    9,    9,    9, 0x0a,
     413,   36,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_KeyBoard[] = {
    "KeyBoard\0\0characterGenerated(QChar)\0"
    "widget\0sigUpdatePosition(QWidget*)\0"
    "text\0setDispText(QString)\0"
    "setHanziText(QString)\0onCapslock()\0"
    "onBackspace()\0onEsc()\0onModeInput()\0"
    "visible\0setVisible(bool)\0gotoNumPad()\0"
    "gotoSymbolPad()\0symbolType\0"
    "gotoSymbolPad(int)\0onPrevPad()\0"
    "oldFocus,newFocus\0saveFocusWidget(QWidget*,QWidget*)\0"
    "onButtonPressed(QWidget*)\0"
    "onButtonRelease(QWidget*)\0generateEnterChar()\0"
    "generateBackSpaceChar()\0"
    "updatePosition(QWidget*)\0"
};

void KeyBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        KeyBoard *_t = static_cast<KeyBoard *>(_o);
        switch (_id) {
        case 0: _t->characterGenerated((*reinterpret_cast< QChar(*)>(_a[1]))); break;
        case 1: _t->sigUpdatePosition((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->setDispText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setHanziText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onCapslock(); break;
        case 5: _t->onBackspace(); break;
        case 6: _t->onEsc(); break;
        case 7: _t->onModeInput(); break;
        case 8: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->gotoNumPad(); break;
        case 10: _t->gotoSymbolPad(); break;
        case 11: _t->gotoSymbolPad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onPrevPad(); break;
        case 13: _t->saveFocusWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 14: _t->onButtonPressed((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 15: _t->onButtonRelease((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 16: _t->generateEnterChar(); break;
        case 17: _t->generateBackSpaceChar(); break;
        case 18: _t->updatePosition((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData KeyBoard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject KeyBoard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_KeyBoard,
      qt_meta_data_KeyBoard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &KeyBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *KeyBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *KeyBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_KeyBoard))
        return static_cast<void*>(const_cast< KeyBoard*>(this));
    if (!strcmp(_clname, "Ui::KeyBoard"))
        return static_cast< Ui::KeyBoard*>(const_cast< KeyBoard*>(this));
    return QDialog::qt_metacast(_clname);
}

int KeyBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void KeyBoard::characterGenerated(QChar _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KeyBoard::sigUpdatePosition(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
