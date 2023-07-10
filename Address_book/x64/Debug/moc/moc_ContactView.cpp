/****************************************************************************
** Meta object code from reading C++ file 'ContactView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ContactView.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSContactViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSContactViewENDCLASS = QtMocHelpers::stringData(
    "ContactView",
    "contactClicked",
    "",
    "contactItemPtr",
    "contact_data_ptr_",
    "onContactAdded",
    "new_contact_",
    "onContactsAdded",
    "contacts_list_",
    "onContactDeleted",
    "contact_delete_",
    "onContactUpdated",
    "updated_contact_",
    "onRowsInserted",
    "QModelIndex",
    "parent",
    "first",
    "last"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSContactViewENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[12];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[15];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[17];
    char stringdata12[17];
    char stringdata13[15];
    char stringdata14[12];
    char stringdata15[7];
    char stringdata16[6];
    char stringdata17[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSContactViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSContactViewENDCLASS_t qt_meta_stringdata_CLASSContactViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ContactView"
        QT_MOC_LITERAL(12, 14),  // "contactClicked"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 14),  // "contactItemPtr"
        QT_MOC_LITERAL(43, 17),  // "contact_data_ptr_"
        QT_MOC_LITERAL(61, 14),  // "onContactAdded"
        QT_MOC_LITERAL(76, 12),  // "new_contact_"
        QT_MOC_LITERAL(89, 15),  // "onContactsAdded"
        QT_MOC_LITERAL(105, 14),  // "contacts_list_"
        QT_MOC_LITERAL(120, 16),  // "onContactDeleted"
        QT_MOC_LITERAL(137, 15),  // "contact_delete_"
        QT_MOC_LITERAL(153, 16),  // "onContactUpdated"
        QT_MOC_LITERAL(170, 16),  // "updated_contact_"
        QT_MOC_LITERAL(187, 14),  // "onRowsInserted"
        QT_MOC_LITERAL(202, 11),  // "QModelIndex"
        QT_MOC_LITERAL(214, 6),  // "parent"
        QT_MOC_LITERAL(221, 5),  // "first"
        QT_MOC_LITERAL(227, 4)   // "last"
    },
    "ContactView",
    "contactClicked",
    "",
    "contactItemPtr",
    "contact_data_ptr_",
    "onContactAdded",
    "new_contact_",
    "onContactsAdded",
    "contacts_list_",
    "onContactDeleted",
    "contact_delete_",
    "onContactUpdated",
    "updated_contact_",
    "onRowsInserted",
    "QModelIndex",
    "parent",
    "first",
    "last"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSContactViewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   53,    2, 0x10a,    3 /* Public | MethodIsConst  */,
       7,    1,   56,    2, 0x10a,    5 /* Public | MethodIsConst  */,
       9,    1,   59,    2, 0x10a,    7 /* Public | MethodIsConst  */,
      11,    1,   62,    2, 0x0a,    9 /* Public */,
      13,    3,   65,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariantList,    8,
    QMetaType::Void, QMetaType::QVariant,   10,
    QMetaType::Void, QMetaType::QVariant,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, QMetaType::Int,   15,   16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject ContactView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_CLASSContactViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSContactViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSContactViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ContactView, std::true_type>,
        // method 'contactClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const contactItemPtr, std::false_type>,
        // method 'onContactAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'onContactsAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'onContactDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'onContactUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'onRowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ContactView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContactView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contactClicked((*reinterpret_cast< std::add_pointer_t<contactItemPtr>>(_a[1]))); break;
        case 1: _t->onContactAdded((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 2: _t->onContactsAdded((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 3: _t->onContactDeleted((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 4: _t->onContactUpdated((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 5: _t->onRowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContactView::*)(const contactItemPtr );
            if (_t _q_method = &ContactView::contactClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ContactView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSContactViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int ContactView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ContactView::contactClicked(const contactItemPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
