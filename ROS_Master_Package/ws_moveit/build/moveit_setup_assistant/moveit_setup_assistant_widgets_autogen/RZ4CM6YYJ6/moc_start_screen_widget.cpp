/****************************************************************************
** Meta object code from reading C++ file 'start_screen_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/start_screen_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'start_screen_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__StartScreenWidget_t {
    QByteArrayData data[10];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__StartScreenWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__StartScreenWidget_t qt_meta_stringdata_moveit_setup_assistant__StartScreenWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "moveit_setup_assistant::Start..."
QT_MOC_LITERAL(1, 42, 15), // "readyToProgress"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 8), // "loadRviz"
QT_MOC_LITERAL(4, 68, 14), // "showNewOptions"
QT_MOC_LITERAL(5, 83, 19), // "showExistingOptions"
QT_MOC_LITERAL(6, 103, 14), // "loadFilesClick"
QT_MOC_LITERAL(7, 118, 20), // "onPackagePathChanged"
QT_MOC_LITERAL(8, 139, 4), // "path"
QT_MOC_LITERAL(9, 144, 17) // "onUrdfPathChanged"

    },
    "moveit_setup_assistant::StartScreenWidget\0"
    "readyToProgress\0\0loadRviz\0showNewOptions\0"
    "showExistingOptions\0loadFilesClick\0"
    "onPackagePathChanged\0path\0onUrdfPathChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__StartScreenWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void moveit_setup_assistant::StartScreenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StartScreenWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyToProgress(); break;
        case 1: _t->loadRviz(); break;
        case 2: _t->showNewOptions(); break;
        case 3: _t->showExistingOptions(); break;
        case 4: _t->loadFilesClick(); break;
        case 5: _t->onPackagePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onUrdfPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StartScreenWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartScreenWidget::readyToProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StartScreenWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StartScreenWidget::loadRviz)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::StartScreenWidget::staticMetaObject = { {
    &SetupScreenWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__StartScreenWidget.data,
    qt_meta_data_moveit_setup_assistant__StartScreenWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::StartScreenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::StartScreenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__StartScreenWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::StartScreenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::StartScreenWidget::readyToProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_setup_assistant::StartScreenWidget::loadRviz()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_moveit_setup_assistant__SelectModeWidget_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__SelectModeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__SelectModeWidget_t qt_meta_stringdata_moveit_setup_assistant__SelectModeWidget = {
    {
QT_MOC_LITERAL(0, 0, 40) // "moveit_setup_assistant::Selec..."

    },
    "moveit_setup_assistant::SelectModeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__SelectModeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void moveit_setup_assistant::SelectModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::SelectModeWidget::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__SelectModeWidget.data,
    qt_meta_data_moveit_setup_assistant__SelectModeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::SelectModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::SelectModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__SelectModeWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int moveit_setup_assistant::SelectModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
