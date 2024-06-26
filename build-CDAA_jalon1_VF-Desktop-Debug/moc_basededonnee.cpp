/****************************************************************************
** Meta object code from reading C++ file 'basededonnee.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CDAA_jalon1_VF/basededonnee.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basededonnee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_basededonnee_t {
    QByteArrayData data[17];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_basededonnee_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_basededonnee_t qt_meta_stringdata_basededonnee = {
    {
QT_MOC_LITERAL(0, 0, 12), // "basededonnee"
QT_MOC_LITERAL(1, 13, 10), // "envoyerNBC"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "envoyerContact"
QT_MOC_LITERAL(4, 40, 8), // "Contact*"
QT_MOC_LITERAL(5, 49, 18), // "list<Interaction*>"
QT_MOC_LITERAL(6, 68, 19), // "list<list<tache*> >"
QT_MOC_LITERAL(7, 88, 12), // "ajoutContact"
QT_MOC_LITERAL(8, 101, 9), // "trouverNb"
QT_MOC_LITERAL(9, 111, 9), // "reception"
QT_MOC_LITERAL(10, 121, 6), // "string"
QT_MOC_LITERAL(11, 128, 9), // "deleteCbd"
QT_MOC_LITERAL(12, 138, 7), // "reciveE"
QT_MOC_LITERAL(13, 146, 15), // "recInteractionE"
QT_MOC_LITERAL(14, 162, 12), // "Interaction*"
QT_MOC_LITERAL(15, 175, 9), // "recTacheE"
QT_MOC_LITERAL(16, 185, 6) // "tache*"

    },
    "basededonnee\0envoyerNBC\0\0envoyerContact\0"
    "Contact*\0list<Interaction*>\0"
    "list<list<tache*> >\0ajoutContact\0"
    "trouverNb\0reception\0string\0deleteCbd\0"
    "reciveE\0recInteractionE\0Interaction*\0"
    "recTacheE\0tache*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_basededonnee[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    3,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   69,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    2,   73,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      12,    4,   81,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void basededonnee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<basededonnee *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->envoyerNBC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->envoyerContact((*reinterpret_cast< Contact*(*)>(_a[1])),(*reinterpret_cast< list<Interaction*>(*)>(_a[2])),(*reinterpret_cast< list<list<tache*> >(*)>(_a[3]))); break;
        case 2: _t->ajoutContact((*reinterpret_cast< Contact*(*)>(_a[1]))); break;
        case 3: _t->trouverNb(); break;
        case 4: _t->reception((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 5: _t->deleteCbd((*reinterpret_cast< Contact*(*)>(_a[1]))); break;
        case 6: _t->reciveE((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->recInteractionE((*reinterpret_cast< Interaction*(*)>(_a[1]))); break;
        case 8: _t->recTacheE((*reinterpret_cast< tache*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (basededonnee::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&basededonnee::envoyerNBC)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (basededonnee::*)(Contact * , list<Interaction*> , list<list<tache*>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&basededonnee::envoyerContact)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject basededonnee::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_basededonnee.data,
    qt_meta_data_basededonnee,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *basededonnee::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *basededonnee::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_basededonnee.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int basededonnee::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void basededonnee::envoyerNBC(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void basededonnee::envoyerContact(Contact * _t1, list<Interaction*> _t2, list<list<tache*>> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
