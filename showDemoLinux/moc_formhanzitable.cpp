/****************************************************************************
** Meta object code from reading C++ file 'formhanzitable.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TestInput_Cursor/formhanzitable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formhanzitable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormHanziTable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      27,   15,   15,   15, 0x08,
      42,   40,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormHanziTable[] = {
    "FormHanziTable\0\0onPageUp()\0onPageDown()\0"
    "s\0setHanziText(QString)\0"
};

void FormHanziTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormHanziTable *_t = static_cast<FormHanziTable *>(_o);
        switch (_id) {
        case 0: _t->onPageUp(); break;
        case 1: _t->onPageDown(); break;
        case 2: _t->setHanziText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FormHanziTable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FormHanziTable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormHanziTable,
      qt_meta_data_FormHanziTable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormHanziTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormHanziTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormHanziTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormHanziTable))
        return static_cast<void*>(const_cast< FormHanziTable*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormHanziTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
