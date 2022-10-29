/****************************************************************************
** Meta object code from reading C++ file 'srechmusicfrom.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../srechmusicfrom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'srechmusicfrom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SrechMusicFrom_t {
    const uint offsetsAndSize[12];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SrechMusicFrom_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SrechMusicFrom_t qt_meta_stringdata_SrechMusicFrom = {
    {
QT_MOC_LITERAL(0, 14), // "SrechMusicFrom"
QT_MOC_LITERAL(15, 10), // "textchange"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 4), // "text"
QT_MOC_LITERAL(32, 7), // "Boxshow"
QT_MOC_LITERAL(40, 5) // "state"

    },
    "SrechMusicFrom\0textchange\0\0text\0Boxshow\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SrechMusicFrom[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,
       4,    1,   29,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void SrechMusicFrom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SrechMusicFrom *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textchange((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->Boxshow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SrechMusicFrom::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SrechMusicFrom::textchange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SrechMusicFrom::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SrechMusicFrom::Boxshow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SrechMusicFrom::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SrechMusicFrom.offsetsAndSize,
    qt_meta_data_SrechMusicFrom,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SrechMusicFrom_t
, QtPrivate::TypeAndForceComplete<SrechMusicFrom, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>



>,
    nullptr
} };


const QMetaObject *SrechMusicFrom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SrechMusicFrom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SrechMusicFrom.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SrechMusicFrom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SrechMusicFrom::textchange(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SrechMusicFrom::Boxshow(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
