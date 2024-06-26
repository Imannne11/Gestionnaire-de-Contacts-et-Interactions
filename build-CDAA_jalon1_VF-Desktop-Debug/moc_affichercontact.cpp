/****************************************************************************
** Meta object code from reading C++ file 'affichercontact.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../CDAA_jalon1_VF/affichercontact.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'affichercontact.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AfficherContact_t {
    QByteArrayData data[7];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AfficherContact_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AfficherContact_t qt_meta_stringdata_AfficherContact = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AfficherContact"
QT_MOC_LITERAL(1, 16, 14), // "receiveContact"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "Contact*"
QT_MOC_LITERAL(4, 41, 18), // "list<Interaction*>"
QT_MOC_LITERAL(5, 60, 19), // "list<list<tache*> >"
QT_MOC_LITERAL(6, 80, 31) // "on_listWidget_itemDoubleClicked"

    },
    "AfficherContact\0receiveContact\0\0"
    "Contact*\0list<Interaction*>\0"
    "list<list<tache*> >\0on_listWidget_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AfficherContact[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x0a /* Public */,
       6,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void AfficherContact::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AfficherContact *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->receiveContact((*reinterpret_cast< Contact*(*)>(_a[1])),(*reinterpret_cast< list<Interaction*>(*)>(_a[2])),(*reinterpret_cast< list<list<tache*> >(*)>(_a[3]))); break;
        case 1: _t->on_listWidget_itemDoubleClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AfficherContact::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AfficherContact.data,
    qt_meta_data_AfficherContact,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AfficherContact::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AfficherContact::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AfficherContact.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AfficherContact::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
