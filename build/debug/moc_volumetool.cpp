/****************************************************************************
** Meta object code from reading C++ file 'volumetool.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../volumetool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumetool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_volumeTool_t {
    const uint offsetsAndSize[14];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_volumeTool_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_volumeTool_t qt_meta_stringdata_volumeTool = {
    {
QT_MOC_LITERAL(0, 10), // "volumeTool"
QT_MOC_LITERAL(11, 8), // "getState"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 5), // "state"
QT_MOC_LITERAL(27, 9), // "setVolume"
QT_MOC_LITERAL(37, 3), // "num"
QT_MOC_LITERAL(41, 21) // "on_pushButton_clicked"

    },
    "volumeTool\0getState\0\0state\0setVolume\0"
    "num\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_volumeTool[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   38,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void volumeTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<volumeTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (volumeTool::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&volumeTool::getState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (volumeTool::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&volumeTool::setVolume)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject volumeTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_volumeTool.offsetsAndSize,
    qt_meta_data_volumeTool,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_volumeTool_t
, QtPrivate::TypeAndForceComplete<volumeTool, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *volumeTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *volumeTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_volumeTool.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int volumeTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void volumeTool::getState(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void volumeTool::setVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
