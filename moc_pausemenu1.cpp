/****************************************************************************
** Meta object code from reading C++ file 'pausemenu1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Documents/Udea/semestre 2/proyecto-final/Proyectoinfo2/pausemenu1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pausemenu1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_pausemenu1_t {
    QByteArrayData data[9];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pausemenu1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pausemenu1_t qt_meta_stringdata_pausemenu1 = {
    {
QT_MOC_LITERAL(0, 0, 10), // "pausemenu1"
QT_MOC_LITERAL(1, 11, 15), // "on_play_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 52, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 74, 25), // "on_volumenbar_sliderMoved"
QT_MOC_LITERAL(6, 100, 8), // "position"
QT_MOC_LITERAL(7, 109, 19), // "on_pasarizq_clicked"
QT_MOC_LITERAL(8, 129, 19) // "on_pasarder_clicked"

    },
    "pausemenu1\0on_play_clicked\0\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "on_volumenbar_sliderMoved\0position\0"
    "on_pasarizq_clicked\0on_pasarder_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pausemenu1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pausemenu1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pausemenu1 *_t = static_cast<pausemenu1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_play_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_volumenbar_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pasarizq_clicked(); break;
        case 5: _t->on_pasarder_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject pausemenu1::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_pausemenu1.data,
      qt_meta_data_pausemenu1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *pausemenu1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pausemenu1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_pausemenu1.stringdata0))
        return static_cast<void*>(const_cast< pausemenu1*>(this));
    return QWidget::qt_metacast(_clname);
}

int pausemenu1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
