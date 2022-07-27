/****************************************************************************
** Meta object code from reading C++ file 'configuration_files_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/configuration_files_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuration_files_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget_t qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget = {
    {
QT_MOC_LITERAL(0, 0, 48), // "moveit_setup_assistant::Confi..."
QT_MOC_LITERAL(1, 49, 11), // "savePackage"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 15), // "generatePackage"
QT_MOC_LITERAL(4, 78, 18), // "exitSetupAssistant"
QT_MOC_LITERAL(5, 97, 16), // "changeActionDesc"
QT_MOC_LITERAL(6, 114, 2), // "id"
QT_MOC_LITERAL(7, 117, 18), // "changeCheckedState"
QT_MOC_LITERAL(8, 136, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 153, 4), // "item"
QT_MOC_LITERAL(10, 158, 16), // "setCheckSelected"
QT_MOC_LITERAL(11, 175, 7) // "checked"

    },
    "moveit_setup_assistant::ConfigurationFilesWidget\0"
    "savePackage\0\0generatePackage\0"
    "exitSetupAssistant\0changeActionDesc\0"
    "id\0changeCheckedState\0QListWidgetItem*\0"
    "item\0setCheckSelected\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__ConfigurationFilesWidget[] = {

 // content:
       8,       // revision
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
       7,    1,   50,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void moveit_setup_assistant::ConfigurationFilesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigurationFilesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savePackage(); break;
        case 1: { bool _r = _t->generatePackage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->exitSetupAssistant(); break;
        case 3: _t->changeActionDesc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeCheckedState((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->setCheckSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::ConfigurationFilesWidget::staticMetaObject = { {
    &SetupScreenWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget.data,
    qt_meta_data_moveit_setup_assistant__ConfigurationFilesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::ConfigurationFilesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::ConfigurationFilesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__ConfigurationFilesWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::ConfigurationFilesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
