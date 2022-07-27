/****************************************************************************
** Meta object code from reading C++ file 'trajectory_visualization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/moveit/rviz_plugin_render_tools/trajectory_visualization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trajectory_visualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization_t {
    QByteArrayData data[17];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization_t qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization = {
    {
QT_MOC_LITERAL(0, 0, 43), // "moveit_rviz_plugin::Trajector..."
QT_MOC_LITERAL(1, 44, 23), // "interruptCurrentDisplay"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 29), // "setDefaultAttachedObjectColor"
QT_MOC_LITERAL(4, 99, 5), // "color"
QT_MOC_LITERAL(5, 105, 31), // "changedDisplayPathVisualEnabled"
QT_MOC_LITERAL(6, 137, 34), // "changedDisplayPathCollisionEn..."
QT_MOC_LITERAL(7, 172, 21), // "changedRobotPathAlpha"
QT_MOC_LITERAL(8, 194, 18), // "changedLoopDisplay"
QT_MOC_LITERAL(9, 213, 16), // "changedShowTrail"
QT_MOC_LITERAL(10, 230, 20), // "changedTrailStepSize"
QT_MOC_LITERAL(11, 251, 22), // "changedTrajectoryTopic"
QT_MOC_LITERAL(12, 274, 23), // "changedStateDisplayTime"
QT_MOC_LITERAL(13, 298, 17), // "changedRobotColor"
QT_MOC_LITERAL(14, 316, 17), // "enabledRobotColor"
QT_MOC_LITERAL(15, 334, 37), // "trajectorySliderPanelVisibili..."
QT_MOC_LITERAL(16, 372, 6) // "enable"

    },
    "moveit_rviz_plugin::TrajectoryVisualization\0"
    "interruptCurrentDisplay\0\0"
    "setDefaultAttachedObjectColor\0color\0"
    "changedDisplayPathVisualEnabled\0"
    "changedDisplayPathCollisionEnabled\0"
    "changedRobotPathAlpha\0changedLoopDisplay\0"
    "changedShowTrail\0changedTrailStepSize\0"
    "changedTrajectoryTopic\0changedStateDisplayTime\0"
    "changedRobotColor\0enabledRobotColor\0"
    "trajectorySliderPanelVisibilityChange\0"
    "enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__TrajectoryVisualization[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    1,   80,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void moveit_rviz_plugin::TrajectoryVisualization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrajectoryVisualization *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interruptCurrentDisplay(); break;
        case 1: _t->setDefaultAttachedObjectColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->changedDisplayPathVisualEnabled(); break;
        case 3: _t->changedDisplayPathCollisionEnabled(); break;
        case 4: _t->changedRobotPathAlpha(); break;
        case 5: _t->changedLoopDisplay(); break;
        case 6: _t->changedShowTrail(); break;
        case 7: _t->changedTrailStepSize(); break;
        case 8: _t->changedTrajectoryTopic(); break;
        case 9: _t->changedStateDisplayTime(); break;
        case 10: _t->changedRobotColor(); break;
        case 11: _t->enabledRobotColor(); break;
        case 12: _t->trajectorySliderPanelVisibilityChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::TrajectoryVisualization::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization.data,
    qt_meta_data_moveit_rviz_plugin__TrajectoryVisualization,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::TrajectoryVisualization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::TrajectoryVisualization::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__TrajectoryVisualization.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int moveit_rviz_plugin::TrajectoryVisualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
