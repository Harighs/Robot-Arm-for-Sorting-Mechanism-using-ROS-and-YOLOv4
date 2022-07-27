/****************************************************************************
** Meta object code from reading C++ file 'virtual_joints_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/virtual_joints_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtual_joints_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget_t qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "moveit_setup_assistant::Virtu..."
QT_MOC_LITERAL(1, 44, 21), // "referenceFrameChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 13), // "showNewScreen"
QT_MOC_LITERAL(4, 81, 12), // "editSelected"
QT_MOC_LITERAL(5, 94, 17), // "editDoubleClicked"
QT_MOC_LITERAL(6, 112, 3), // "row"
QT_MOC_LITERAL(7, 116, 6), // "column"
QT_MOC_LITERAL(8, 123, 14), // "previewClicked"
QT_MOC_LITERAL(9, 138, 14), // "deleteSelected"
QT_MOC_LITERAL(10, 153, 11), // "doneEditing"
QT_MOC_LITERAL(11, 165, 13) // "cancelEditing"

    },
    "moveit_setup_assistant::VirtualJointsWidget\0"
    "referenceFrameChanged\0\0showNewScreen\0"
    "editSelected\0editDoubleClicked\0row\0"
    "column\0previewClicked\0deleteSelected\0"
    "doneEditing\0cancelEditing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__VirtualJointsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    2,   57,    2, 0x08 /* Private */,
       8,    2,   62,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::VirtualJointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualJointsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->referenceFrameChanged(); break;
        case 1: _t->showNewScreen(); break;
        case 2: _t->editSelected(); break;
        case 3: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->deleteSelected(); break;
        case 6: _t->doneEditing(); break;
        case 7: _t->cancelEditing(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VirtualJointsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualJointsWidget::referenceFrameChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::VirtualJointsWidget::staticMetaObject = { {
    &SetupScreenWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget.data,
    qt_meta_data_moveit_setup_assistant__VirtualJointsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::VirtualJointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::VirtualJointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__VirtualJointsWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::VirtualJointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void moveit_setup_assistant::VirtualJointsWidget::referenceFrameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
