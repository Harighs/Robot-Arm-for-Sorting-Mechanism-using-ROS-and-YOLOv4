/****************************************************************************
** Meta object code from reading C++ file 'planning_scene_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/moveit/planning_scene_rviz_plugin/planning_scene_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planning_scene_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay_t {
    QByteArrayData data[18];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay_t qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay = {
    {
QT_MOC_LITERAL(0, 0, 40), // "moveit_rviz_plugin::PlanningS..."
QT_MOC_LITERAL(1, 41, 18), // "changedMoveGroupNS"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 23), // "changedRobotDescription"
QT_MOC_LITERAL(4, 85, 16), // "changedSceneName"
QT_MOC_LITERAL(5, 102, 19), // "changedSceneEnabled"
QT_MOC_LITERAL(6, 122, 30), // "changedSceneRobotVisualEnabled"
QT_MOC_LITERAL(7, 153, 33), // "changedSceneRobotCollisionEna..."
QT_MOC_LITERAL(8, 187, 22), // "changedRobotSceneAlpha"
QT_MOC_LITERAL(9, 210, 17), // "changedSceneAlpha"
QT_MOC_LITERAL(10, 228, 17), // "changedSceneColor"
QT_MOC_LITERAL(11, 246, 25), // "changedPlanningSceneTopic"
QT_MOC_LITERAL(12, 272, 23), // "changedSceneDisplayTime"
QT_MOC_LITERAL(13, 296, 23), // "changedOctreeRenderMode"
QT_MOC_LITERAL(14, 320, 22), // "changedOctreeColorMode"
QT_MOC_LITERAL(15, 343, 12), // "setSceneName"
QT_MOC_LITERAL(16, 356, 4), // "name"
QT_MOC_LITERAL(17, 361, 24) // "changedAttachedBodyColor"

    },
    "moveit_rviz_plugin::PlanningSceneDisplay\0"
    "changedMoveGroupNS\0\0changedRobotDescription\0"
    "changedSceneName\0changedSceneEnabled\0"
    "changedSceneRobotVisualEnabled\0"
    "changedSceneRobotCollisionEnabled\0"
    "changedRobotSceneAlpha\0changedSceneAlpha\0"
    "changedSceneColor\0changedPlanningSceneTopic\0"
    "changedSceneDisplayTime\0changedOctreeRenderMode\0"
    "changedOctreeColorMode\0setSceneName\0"
    "name\0changedAttachedBodyColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__PlanningSceneDisplay[] = {

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
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x09 /* Protected */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void moveit_rviz_plugin::PlanningSceneDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlanningSceneDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedMoveGroupNS(); break;
        case 1: _t->changedRobotDescription(); break;
        case 2: _t->changedSceneName(); break;
        case 3: _t->changedSceneEnabled(); break;
        case 4: _t->changedSceneRobotVisualEnabled(); break;
        case 5: _t->changedSceneRobotCollisionEnabled(); break;
        case 6: _t->changedRobotSceneAlpha(); break;
        case 7: _t->changedSceneAlpha(); break;
        case 8: _t->changedSceneColor(); break;
        case 9: _t->changedPlanningSceneTopic(); break;
        case 10: _t->changedSceneDisplayTime(); break;
        case 11: _t->changedOctreeRenderMode(); break;
        case 12: _t->changedOctreeColorMode(); break;
        case 13: _t->setSceneName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->changedAttachedBodyColor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::PlanningSceneDisplay::staticMetaObject = { {
    &rviz::Display::staticMetaObject,
    qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay.data,
    qt_meta_data_moveit_rviz_plugin__PlanningSceneDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::PlanningSceneDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::PlanningSceneDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__PlanningSceneDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz::Display::qt_metacast(_clname);
}

int moveit_rviz_plugin::PlanningSceneDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Display::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
