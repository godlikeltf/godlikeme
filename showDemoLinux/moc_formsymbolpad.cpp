/****************************************************************************
** Meta object code from reading C++ file 'formsymbolpad.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TestInput_Cursor/formsymbolpad.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formsymbolpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormSymbolPad[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      28,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,
      57,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormSymbolPad[] = {
    "FormSymbolPad\0\0onPrevPage()\0onNextPage()\0"
    "onCHS()\0onENG()\0onMath()\0"
};

void FormSymbolPad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormSymbolPad *_t = static_cast<FormSymbolPad *>(_o);
        switch (_id) {
        case 0: _t->onPrevPage(); break;
        case 1: _t->onNextPage(); break;
        case 2: _t->onCHS(); break;
        case 3: _t->onENG(); break;
        case 4: _t->onMath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FormSymbolPad::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FormSymbolPad::staticMetaObject = {
    { &PadBase::staticMetaObject, qt_meta_stringdata_FormSymbolPad,
      qt_meta_data_FormSymbolPad, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormSymbolPad::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormSymbolPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormSymbolPad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormSymbolPad))
        return static_cast<void*>(const_cast< FormSymbolPad*>(this));
    return PadBase::qt_metacast(_clname);
}

int FormSymbolPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PadBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
