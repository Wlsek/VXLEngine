/****************************************************************************
** Meta object code from reading C++ file 'vxlemenucontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../vxlemenucontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vxlemenucontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VXLEMenuController_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VXLEMenuController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VXLEMenuController_t qt_meta_stringdata_VXLEMenuController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VXLEMenuController"
QT_MOC_LITERAL(1, 19, 12), // "itemSelected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16) // "registerMenuItem"

    },
    "VXLEMenuController\0itemSelected\0\0"
    "registerMenuItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VXLEMenuController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void VXLEMenuController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VXLEMenuController *_t = static_cast<VXLEMenuController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->registerMenuItem((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VXLEMenuController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VXLEMenuController.data,
      qt_meta_data_VXLEMenuController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VXLEMenuController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VXLEMenuController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VXLEMenuController.stringdata0))
        return static_cast<void*>(const_cast< VXLEMenuController*>(this));
    return QObject::qt_metacast(_clname);
}

int VXLEMenuController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
