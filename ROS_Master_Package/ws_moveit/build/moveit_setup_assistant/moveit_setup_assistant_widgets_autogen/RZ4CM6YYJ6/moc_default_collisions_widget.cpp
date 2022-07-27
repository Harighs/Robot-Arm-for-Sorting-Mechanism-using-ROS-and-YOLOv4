/****************************************************************************
** Meta object code from reading C++ file 'default_collisions_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/default_collisions_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'default_collisions_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget_t {
    QByteArrayData data[21];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget_t qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "moveit_setup_assistant::Defau..."
QT_MOC_LITERAL(1, 48, 29), // "startGeneratingCollisionTable"
QT_MOC_LITERAL(2, 78, 0), // ""
QT_MOC_LITERAL(3, 79, 30), // "finishGeneratingCollisionTable"
QT_MOC_LITERAL(4, 110, 18), // "changeDensityLabel"
QT_MOC_LITERAL(5, 129, 5), // "value"
QT_MOC_LITERAL(6, 135, 18), // "loadCollisionTable"
QT_MOC_LITERAL(7, 154, 20), // "checkedFilterChanged"
QT_MOC_LITERAL(8, 175, 17), // "collisionsChanged"
QT_MOC_LITERAL(9, 193, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 205, 5), // "index"
QT_MOC_LITERAL(11, 211, 13), // "revertChanges"
QT_MOC_LITERAL(12, 225, 21), // "previewSelectedMatrix"
QT_MOC_LITERAL(13, 247, 21), // "previewSelectedLinear"
QT_MOC_LITERAL(14, 269, 10), // "focusGiven"
QT_MOC_LITERAL(15, 280, 9), // "focusLost"
QT_MOC_LITERAL(16, 290, 21), // "showHeaderContextMenu"
QT_MOC_LITERAL(17, 312, 1), // "p"
QT_MOC_LITERAL(18, 314, 12), // "hideSections"
QT_MOC_LITERAL(19, 327, 17), // "hideOtherSections"
QT_MOC_LITERAL(20, 345, 12) // "showSections"

    },
    "moveit_setup_assistant::DefaultCollisionsWidget\0"
    "startGeneratingCollisionTable\0\0"
    "finishGeneratingCollisionTable\0"
    "changeDensityLabel\0value\0loadCollisionTable\0"
    "checkedFilterChanged\0collisionsChanged\0"
    "QModelIndex\0index\0revertChanges\0"
    "previewSelectedMatrix\0previewSelectedLinear\0"
    "focusGiven\0focusLost\0showHeaderContextMenu\0"
    "p\0hideSections\0hideOtherSections\0"
    "showSections"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__DefaultCollisionsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      13,    1,  103,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QPoint,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::DefaultCollisionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DefaultCollisionsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startGeneratingCollisionTable(); break;
        case 1: _t->finishGeneratingCollisionTable(); break;
        case 2: _t->changeDensityLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->loadCollisionTable(); break;
        case 4: _t->checkedFilterChanged(); break;
        case 5: _t->collisionsChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->revertChanges(); break;
        case 7: _t->previewSelectedMatrix((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->previewSelectedLinear((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->focusGiven(); break;
        case 10: { bool _r = _t->focusLost();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->showHeaderContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->hideSections(); break;
        case 13: _t->hideOtherSections(); break;
        case 14: _t->showSections(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::DefaultCollisionsWidget::staticMetaObject = { {
    &SetupScreenWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget.data,
    qt_meta_data_moveit_setup_assistant__DefaultCollisionsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::DefaultCollisionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::DefaultCollisionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__DefaultCollisionsWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::DefaultCollisionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_moveit_setup_assistant__MonitorThread_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__MonitorThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__MonitorThread_t qt_meta_stringdata_moveit_setup_assistant__MonitorThread = {
    {
QT_MOC_LITERAL(0, 0, 37), // "moveit_setup_assistant::Monit..."
QT_MOC_LITERAL(1, 38, 8), // "progress"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "moveit_setup_assistant::MonitorThread\0"
    "progress\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__MonitorThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void moveit_setup_assistant::MonitorThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MonitorThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MonitorThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorThread::progress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::MonitorThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__MonitorThread.data,
    qt_meta_data_moveit_setup_assistant__MonitorThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::MonitorThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::MonitorThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__MonitorThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int moveit_setup_assistant::MonitorThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::MonitorThread::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
