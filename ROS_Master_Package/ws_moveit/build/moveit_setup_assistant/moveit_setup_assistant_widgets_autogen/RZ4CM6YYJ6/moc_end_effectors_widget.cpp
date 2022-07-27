/****************************************************************************
** Meta object code from reading C++ file 'end_effectors_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/end_effectors_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'end_effectors_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget_t {
    QByteArrayData data[13];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget_t qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "moveit_setup_assistant::EndEf..."
QT_MOC_LITERAL(1, 43, 13), // "showNewScreen"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 12), // "editSelected"
QT_MOC_LITERAL(4, 71, 17), // "editDoubleClicked"
QT_MOC_LITERAL(5, 89, 3), // "row"
QT_MOC_LITERAL(6, 93, 6), // "column"
QT_MOC_LITERAL(7, 100, 14), // "previewClicked"
QT_MOC_LITERAL(8, 115, 20), // "previewClickedString"
QT_MOC_LITERAL(9, 136, 4), // "name"
QT_MOC_LITERAL(10, 141, 14), // "deleteSelected"
QT_MOC_LITERAL(11, 156, 11), // "doneEditing"
QT_MOC_LITERAL(12, 168, 13) // "cancelEditing"

    },
    "moveit_setup_assistant::EndEffectorsWidget\0"
    "showNewScreen\0\0editSelected\0"
    "editDoubleClicked\0row\0column\0"
    "previewClicked\0previewClickedString\0"
    "name\0deleteSelected\0doneEditing\0"
    "cancelEditing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__EndEffectorsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    2,   56,    2, 0x08 /* Private */,
       7,    2,   61,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::EndEffectorsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EndEffectorsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNewScreen(); break;
        case 1: _t->editSelected(); break;
        case 2: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->previewClickedString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->deleteSelected(); break;
        case 6: _t->doneEditing(); break;
        case 7: _t->cancelEditing(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::EndEffectorsWidget::staticMetaObject = { {
    &SetupScreenWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget.data,
    qt_meta_data_moveit_setup_assistant__EndEffectorsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::EndEffectorsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::EndEffectorsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__EndEffectorsWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::EndEffectorsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
