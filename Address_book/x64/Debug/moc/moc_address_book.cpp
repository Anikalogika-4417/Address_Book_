/****************************************************************************
** Meta object code from reading C++ file 'address_book.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../address_book.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'address_book.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAddress_bookENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAddress_bookENDCLASS = QtMocHelpers::stringData(
    "Address_book",
    "newContact",
    "",
    "contactItemPtr",
    "new_contact_",
    "showContact",
    "var_",
    "onAddButtonCliecked",
    "onSaveEditButtonClicked",
    "onContactClicked",
    "contact_data_ptr_",
    "ContactAddedError",
    "eroor_",
    "ContactAdded"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAddress_bookENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[5];
    char stringdata7[20];
    char stringdata8[24];
    char stringdata9[17];
    char stringdata10[18];
    char stringdata11[18];
    char stringdata12[7];
    char stringdata13[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAddress_bookENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAddress_bookENDCLASS_t qt_meta_stringdata_CLASSAddress_bookENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "Address_book"
        QT_MOC_LITERAL(13, 10),  // "newContact"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 14),  // "contactItemPtr"
        QT_MOC_LITERAL(40, 12),  // "new_contact_"
        QT_MOC_LITERAL(53, 11),  // "showContact"
        QT_MOC_LITERAL(65, 4),  // "var_"
        QT_MOC_LITERAL(70, 19),  // "onAddButtonCliecked"
        QT_MOC_LITERAL(90, 23),  // "onSaveEditButtonClicked"
        QT_MOC_LITERAL(114, 16),  // "onContactClicked"
        QT_MOC_LITERAL(131, 17),  // "contact_data_ptr_"
        QT_MOC_LITERAL(149, 17),  // "ContactAddedError"
        QT_MOC_LITERAL(167, 6),  // "eroor_"
        QT_MOC_LITERAL(174, 12)   // "ContactAdded"
    },
    "Address_book",
    "newContact",
    "",
    "contactItemPtr",
    "new_contact_",
    "showContact",
    "var_",
    "onAddButtonCliecked",
    "onSaveEditButtonClicked",
    "onContactClicked",
    "contact_data_ptr_",
    "ContactAddedError",
    "eroor_",
    "ContactAdded"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAddress_bookENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       5,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   62,    2, 0x08,    5 /* Private */,
       8,    0,   63,    2, 0x08,    6 /* Private */,
       9,    1,   64,    2, 0x08,    7 /* Private */,
      11,    1,   67,    2, 0x08,    9 /* Private */,
      13,    1,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVariant,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject Address_book::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAddress_bookENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAddress_bookENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAddress_bookENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Address_book, std::true_type>,
        // method 'newContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const contactItemPtr, std::false_type>,
        // method 'showContact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'onAddButtonCliecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveEditButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onContactClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const contactItemPtr, std::false_type>,
        // method 'ContactAddedError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ContactAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const contactItemPtr, std::false_type>
    >,
    nullptr
} };

void Address_book::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Address_book *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newContact((*reinterpret_cast< std::add_pointer_t<contactItemPtr>>(_a[1]))); break;
        case 1: _t->showContact((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 2: _t->onAddButtonCliecked(); break;
        case 3: _t->onSaveEditButtonClicked(); break;
        case 4: _t->onContactClicked((*reinterpret_cast< std::add_pointer_t<contactItemPtr>>(_a[1]))); break;
        case 5: _t->ContactAddedError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->ContactAdded((*reinterpret_cast< std::add_pointer_t<contactItemPtr>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Address_book::*)(const contactItemPtr );
            if (_t _q_method = &Address_book::newContact; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Address_book::*)(const QVariant & );
            if (_t _q_method = &Address_book::showContact; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Address_book::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Address_book::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAddress_bookENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Address_book::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Address_book::newContact(const contactItemPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Address_book::showContact(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
