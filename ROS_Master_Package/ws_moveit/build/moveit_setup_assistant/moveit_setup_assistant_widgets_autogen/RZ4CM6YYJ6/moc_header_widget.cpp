/****************************************************************************
** Meta object code from reading C++ file 'header_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/header_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'header_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__HeaderWidget_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__HeaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__HeaderWidget_t qt_meta_stringdata_moveit_setup_assistant__HeaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 36) // "moveit_setup_assistant::Heade..."

    },
    "moveit_setup_assistant::HeaderWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__HeaderWidget[] = {

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

void moveit_setup_assistant::HeaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::HeaderWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__HeaderWidget.data,
    qt_meta_data_moveit_setup_assistant__HeaderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::HeaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::HeaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__HeaderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::HeaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_moveit_setup_assistant__LoadPathWidget_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__LoadPathWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__LoadPathWidget_t qt_meta_stringdata_moveit_setup_assistant__LoadPathWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "moveit_setup_assistant::LoadP..."
QT_MOC_LITERAL(1, 39, 11), // "pathChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 4), // "path"
QT_MOC_LITERAL(4, 57, 19), // "pathEditingFinished"
QT_MOC_LITERAL(5, 77, 13) // "btnFileDialog"

    },
    "moveit_setup_assistant::LoadPathWidget\0"
    "pathChanged\0\0path\0pathEditingFinished\0"
    "btnFileDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__LoadPathWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::LoadPathWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadPathWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pathEditingFinished(); break;
        case 2: _t->btnFileDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoadPathWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadPathWidget::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoadPathWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadPathWidget::pathEditingFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::LoadPathWidget::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__LoadPathWidget.data,
    qt_meta_data_moveit_setup_assistant__LoadPathWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::LoadPathWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::LoadPathWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__LoadPathWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int moveit_setup_assistant::LoadPathWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::LoadPathWidget::pathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void moveit_setup_assistant::LoadPathWidget::pathEditingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_moveit_setup_assistant__LoadPathArgsWidget_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__LoadPathArgsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__LoadPathArgsWidget_t qt_meta_stringdata_moveit_setup_assistant__LoadPathArgsWidget = {
    {
QT_MOC_LITERAL(0, 0, 42) // "moveit_setup_assistant::LoadP..."

    },
    "moveit_setup_assistant::LoadPathArgsWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__LoadPathArgsWidget[] = {

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

void moveit_setup_assistant::LoadPathArgsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::LoadPathArgsWidget::staticMetaObject = { {
    &LoadPathWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__LoadPathArgsWidget.data,
    qt_meta_data_moveit_setup_assistant__LoadPathArgsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::LoadPathArgsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::LoadPathArgsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__LoadPathArgsWidget.stringdata0))
        return static_cast<void*>(this);
    return LoadPathWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::LoadPathArgsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LoadPathWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
