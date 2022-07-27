/****************************************************************************
** Meta object code from reading C++ file 'controller_edit_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/controller_edit_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller_edit_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__ControllerEditWidget_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__ControllerEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__ControllerEditWidget_t qt_meta_stringdata_moveit_setup_assistant__ControllerEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 44), // "moveit_setup_assistant::Contr..."
QT_MOC_LITERAL(1, 45, 10), // "saveJoints"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 16), // "saveJointsGroups"
QT_MOC_LITERAL(4, 74, 4), // "save"
QT_MOC_LITERAL(5, 79, 13), // "cancelEditing"
QT_MOC_LITERAL(6, 93, 16) // "deleteController"

    },
    "moveit_setup_assistant::ControllerEditWidget\0"
    "saveJoints\0\0saveJointsGroups\0save\0"
    "cancelEditing\0deleteController"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__ControllerEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::ControllerEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveJoints(); break;
        case 1: _t->saveJointsGroups(); break;
        case 2: _t->save(); break;
        case 3: _t->cancelEditing(); break;
        case 4: _t->deleteController(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::saveJoints)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::saveJointsGroups)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::save)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::cancelEditing)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ControllerEditWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControllerEditWidget::deleteController)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::ControllerEditWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__ControllerEditWidget.data,
    qt_meta_data_moveit_setup_assistant__ControllerEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::ControllerEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::ControllerEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__ControllerEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::ControllerEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::ControllerEditWidget::saveJoints()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_setup_assistant::ControllerEditWidget::saveJointsGroups()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void moveit_setup_assistant::ControllerEditWidget::save()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void moveit_setup_assistant::ControllerEditWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void moveit_setup_assistant::ControllerEditWidget::deleteController()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
