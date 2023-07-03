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
    "showContacts",
    "var_list_",
    "onAddButtonCliecked",
    "onSaveEditButtonClicked",
    "onContactClicked",
    "contact_data_ptr_",
    "ContactAddedError",
    "eroor_",
    "ContactAdded",
    "ContactsAdded",
    "contactListPtr",
    "all_contacts_"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAddress_bookENDCLASS_t {
    uint offsetsAndSizes[38];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[5];
    char stringdata7[13];
    char stringdata8[10];
    char stringdata9[20];
    char stringdata10[24];
    char stringdata11[17];
    char stringdata12[18];
    char stringdata13[18];
    char stringdata14[7];
    char stringdata15[13];
    char stringdata16[14];
    char stringdata17[15];
    char stringdata18[14];
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
        QT_MOC_LITERAL(70, 12),  // "showContacts"
        QT_MOC_LITERAL(83, 9),  // "var_list_"
        QT_MOC_LITERAL(93, 19),  // "onAddButtonCliecked"
        QT_MOC_LITERAL(113, 23),  // "onSaveEditButtonClicked"
        QT_MOC_LITERAL(137, 16),  // "onContactClicked"
        QT_MOC_LITERAL(154, 17),  // "contact_data_ptr_"
        QT_MOC_LITERAL(172, 17),  // "ContactAddedError"
        QT_MOC_LITERAL(190, 6),  // "eroor_"
        QT_MOC_LITERAL(197, 12),  // "ContactAdded"
        QT_MOC_LITERAL(210, 13),  // "ContactsAdded"
        QT_MOC_LITERAL(224, 14),  // "contactListPtr"
        QT_MOC_LITERAL(239, 13)   // "all_contacts_"
    },
    "Address_book",
    "newContact",
    "",
    "contactItemPtr",
    "new_contact_",
    "showContact",
    "var_",
    "showContacts",
    "var_list_",
    "onAddButtonCliecked",
    "onSaveEditButtonClicked",
    "onContactClicked",
    "contact_data_ptr_",
    "ContactAddedError",
    "eroor_",
    "ContactAdded",
    "ContactsAdded",
    "contactListPtr",
    "all_contacts_"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAddress_bookENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    1,   71,    2, 0x06,    3 /* Public */,
       7,    1,   74,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   77,    2, 0x08,    7 /* Private */,
      10,    0,   78,    2, 0x08,    8 /* Private */,
      11,    1,   79,    2, 0x08,    9 /* Private */,
      13,    1,   82,    2, 0x08,   11 /* Private */,
      15,    1,   85,    2, 0x08,   13 /* Private */,
      16,    1,   88,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariantList,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 17,   18,

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
        // method 'showContacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<const contactItemPtr, std::false_type>,
        // method 'ContactsAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const contactListPtr, std::false_type>
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
        case 2: _t->showContacts((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 3: _t->onAddButtonCliecked(); break;
        case 4: _t->onSaveEditButtonClicked(); break;
        case 5: _t->onContactClicked((*reinterpret_cast< std::add_pointer_t<contactItemPtr>>(_a[1]))); break;
        case 6: _t->ContactAddedError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->ContactAdded((*reinterpret_cast< std::add_pointer_t<contactItemPtr>>(_a[1]))); break;
        case 8: _t->ContactsAdded((*reinterpret_cast< std::add_pointer_t<contactListPtr>>(_a[1]))); break;
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
        {
            using _t = void (Address_book::*)(const QVariantList & );
            if (_t _q_method = &Address_book::showContacts; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
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

// SIGNAL 2
void Address_book::showContacts(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
