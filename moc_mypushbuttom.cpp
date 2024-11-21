/****************************************************************************
** Meta object code from reading C++ file 'mypushbuttom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Documents/Udea/semestre 2/proyecto-final/Proyectoinfo2/mypushbuttom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mypushbuttom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mypushbuttom_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mypushbuttom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mypushbuttom_t qt_meta_stringdata_mypushbuttom = {
    {
QT_MOC_LITERAL(0, 0, 12), // "mypushbuttom"
QT_MOC_LITERAL(1, 13, 10), // "Mouse_Posp"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11) // "Mouse_Leftp"

    },
    "mypushbuttom\0Mouse_Posp\0\0Mouse_Leftp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mypushbuttom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mypushbuttom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mypushbuttom *_t = static_cast<mypushbuttom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Mouse_Posp(); break;
        case 1: _t->Mouse_Leftp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mypushbuttom::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mypushbuttom::Mouse_Posp)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (mypushbuttom::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mypushbuttom::Mouse_Leftp)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject mypushbuttom::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_mypushbuttom.data,
      qt_meta_data_mypushbuttom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mypushbuttom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mypushbuttom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mypushbuttom.stringdata0))
        return static_cast<void*>(const_cast< mypushbuttom*>(this));
    return QPushButton::qt_metacast(_clname);
}

int mypushbuttom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mypushbuttom::Mouse_Posp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void mypushbuttom::Mouse_Leftp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
