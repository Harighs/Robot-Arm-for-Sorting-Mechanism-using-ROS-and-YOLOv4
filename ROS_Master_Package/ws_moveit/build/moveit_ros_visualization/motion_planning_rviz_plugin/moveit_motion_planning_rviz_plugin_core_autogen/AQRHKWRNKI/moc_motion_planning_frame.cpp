/****************************************************************************
** Meta object code from reading C++ file 'motion_planning_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/moveit/motion_planning_rviz_plugin/motion_planning_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motion_planning_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame_t {
    QByteArrayData data[80];
    char stringdata0[1670];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame_t qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame = {
    {
QT_MOC_LITERAL(0, 0, 39), // "moveit_rviz_plugin::MotionPla..."
QT_MOC_LITERAL(1, 40, 16), // "planningFinished"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 13), // "configChanged"
QT_MOC_LITERAL(4, 72, 28), // "databaseConnectButtonClicked"
QT_MOC_LITERAL(5, 101, 28), // "planningPipelineIndexChanged"
QT_MOC_LITERAL(6, 130, 5), // "index"
QT_MOC_LITERAL(7, 136, 29), // "planningAlgorithmIndexChanged"
QT_MOC_LITERAL(8, 166, 20), // "resetDbButtonClicked"
QT_MOC_LITERAL(9, 187, 20), // "approximateIKChanged"
QT_MOC_LITERAL(10, 208, 5), // "state"
QT_MOC_LITERAL(11, 214, 20), // "computeCartesianPlan"
QT_MOC_LITERAL(12, 235, 21), // "computeJointSpacePlan"
QT_MOC_LITERAL(13, 257, 17), // "planButtonClicked"
QT_MOC_LITERAL(14, 275, 20), // "executeButtonClicked"
QT_MOC_LITERAL(15, 296, 27), // "planAndExecuteButtonClicked"
QT_MOC_LITERAL(16, 324, 17), // "stopButtonClicked"
QT_MOC_LITERAL(17, 342, 22), // "allowReplanningToggled"
QT_MOC_LITERAL(18, 365, 7), // "checked"
QT_MOC_LITERAL(19, 373, 19), // "allowLookingToggled"
QT_MOC_LITERAL(20, 393, 33), // "allowExternalProgramCommunica..."
QT_MOC_LITERAL(21, 427, 6), // "enable"
QT_MOC_LITERAL(22, 434, 27), // "pathConstraintsIndexChanged"
QT_MOC_LITERAL(23, 462, 23), // "onNewPlanningSceneState"
QT_MOC_LITERAL(24, 486, 21), // "startStateTextChanged"
QT_MOC_LITERAL(25, 508, 11), // "start_state"
QT_MOC_LITERAL(26, 520, 20), // "goalStateTextChanged"
QT_MOC_LITERAL(27, 541, 10), // "goal_state"
QT_MOC_LITERAL(28, 552, 24), // "planningGroupTextChanged"
QT_MOC_LITERAL(29, 577, 14), // "planning_group"
QT_MOC_LITERAL(30, 592, 21), // "onClearOctomapClicked"
QT_MOC_LITERAL(31, 614, 10), // "clearScene"
QT_MOC_LITERAL(32, 625, 12), // "publishScene"
QT_MOC_LITERAL(33, 638, 20), // "publishSceneIfNeeded"
QT_MOC_LITERAL(34, 659, 19), // "setLocalSceneEdited"
QT_MOC_LITERAL(35, 679, 5), // "dirty"
QT_MOC_LITERAL(36, 685, 17), // "isLocalSceneDirty"
QT_MOC_LITERAL(37, 703, 17), // "sceneScaleChanged"
QT_MOC_LITERAL(38, 721, 5), // "value"
QT_MOC_LITERAL(39, 727, 21), // "sceneScaleStartChange"
QT_MOC_LITERAL(40, 749, 19), // "sceneScaleEndChange"
QT_MOC_LITERAL(41, 769, 21), // "shapesComboBoxChanged"
QT_MOC_LITERAL(42, 791, 4), // "text"
QT_MOC_LITERAL(43, 796, 14), // "addSceneObject"
QT_MOC_LITERAL(44, 811, 17), // "removeSceneObject"
QT_MOC_LITERAL(45, 829, 30), // "selectedCollisionObjectChanged"
QT_MOC_LITERAL(46, 860, 22), // "objectPoseValueChanged"
QT_MOC_LITERAL(47, 883, 22), // "collisionObjectChanged"
QT_MOC_LITERAL(48, 906, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(49, 923, 4), // "item"
QT_MOC_LITERAL(50, 928, 17), // "imProcessFeedback"
QT_MOC_LITERAL(51, 946, 46), // "visualization_msgs::Interacti..."
QT_MOC_LITERAL(52, 993, 8), // "feedback"
QT_MOC_LITERAL(53, 1002, 27), // "copySelectedCollisionObject"
QT_MOC_LITERAL(54, 1030, 33), // "exportGeometryAsTextButtonCli..."
QT_MOC_LITERAL(55, 1064, 35), // "importGeometryFromTextButtonC..."
QT_MOC_LITERAL(56, 1100, 22), // "saveSceneButtonClicked"
QT_MOC_LITERAL(57, 1123, 24), // "planningSceneItemClicked"
QT_MOC_LITERAL(58, 1148, 22), // "saveQueryButtonClicked"
QT_MOC_LITERAL(59, 1171, 24), // "deleteSceneButtonClicked"
QT_MOC_LITERAL(60, 1196, 24), // "deleteQueryButtonClicked"
QT_MOC_LITERAL(61, 1221, 22), // "loadSceneButtonClicked"
QT_MOC_LITERAL(62, 1244, 22), // "loadQueryButtonClicked"
QT_MOC_LITERAL(63, 1267, 24), // "warehouseItemNameChanged"
QT_MOC_LITERAL(64, 1292, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(65, 1309, 6), // "column"
QT_MOC_LITERAL(66, 1316, 22), // "loadStateButtonClicked"
QT_MOC_LITERAL(67, 1339, 27), // "saveStartStateButtonClicked"
QT_MOC_LITERAL(68, 1367, 26), // "saveGoalStateButtonClicked"
QT_MOC_LITERAL(69, 1394, 24), // "removeStateButtonClicked"
QT_MOC_LITERAL(70, 1419, 24), // "clearStatesButtonClicked"
QT_MOC_LITERAL(71, 1444, 28), // "setAsStartStateButtonClicked"
QT_MOC_LITERAL(72, 1473, 27), // "setAsGoalStateButtonClicked"
QT_MOC_LITERAL(73, 1501, 26), // "detectObjectsButtonClicked"
QT_MOC_LITERAL(74, 1528, 23), // "pickObjectButtonClicked"
QT_MOC_LITERAL(75, 1552, 24), // "placeObjectButtonClicked"
QT_MOC_LITERAL(76, 1577, 29), // "selectedDetectedObjectChanged"
QT_MOC_LITERAL(77, 1607, 21), // "detectedObjectChanged"
QT_MOC_LITERAL(78, 1629, 29), // "selectedSupportSurfaceChanged"
QT_MOC_LITERAL(79, 1659, 10) // "tabChanged"

    },
    "moveit_rviz_plugin::MotionPlanningFrame\0"
    "planningFinished\0\0configChanged\0"
    "databaseConnectButtonClicked\0"
    "planningPipelineIndexChanged\0index\0"
    "planningAlgorithmIndexChanged\0"
    "resetDbButtonClicked\0approximateIKChanged\0"
    "state\0computeCartesianPlan\0"
    "computeJointSpacePlan\0planButtonClicked\0"
    "executeButtonClicked\0planAndExecuteButtonClicked\0"
    "stopButtonClicked\0allowReplanningToggled\0"
    "checked\0allowLookingToggled\0"
    "allowExternalProgramCommunication\0"
    "enable\0pathConstraintsIndexChanged\0"
    "onNewPlanningSceneState\0startStateTextChanged\0"
    "start_state\0goalStateTextChanged\0"
    "goal_state\0planningGroupTextChanged\0"
    "planning_group\0onClearOctomapClicked\0"
    "clearScene\0publishScene\0publishSceneIfNeeded\0"
    "setLocalSceneEdited\0dirty\0isLocalSceneDirty\0"
    "sceneScaleChanged\0value\0sceneScaleStartChange\0"
    "sceneScaleEndChange\0shapesComboBoxChanged\0"
    "text\0addSceneObject\0removeSceneObject\0"
    "selectedCollisionObjectChanged\0"
    "objectPoseValueChanged\0collisionObjectChanged\0"
    "QListWidgetItem*\0item\0imProcessFeedback\0"
    "visualization_msgs::InteractiveMarkerFeedback&\0"
    "feedback\0copySelectedCollisionObject\0"
    "exportGeometryAsTextButtonClicked\0"
    "importGeometryFromTextButtonClicked\0"
    "saveSceneButtonClicked\0planningSceneItemClicked\0"
    "saveQueryButtonClicked\0deleteSceneButtonClicked\0"
    "deleteQueryButtonClicked\0"
    "loadSceneButtonClicked\0loadQueryButtonClicked\0"
    "warehouseItemNameChanged\0QTreeWidgetItem*\0"
    "column\0loadStateButtonClicked\0"
    "saveStartStateButtonClicked\0"
    "saveGoalStateButtonClicked\0"
    "removeStateButtonClicked\0"
    "clearStatesButtonClicked\0"
    "setAsStartStateButtonClicked\0"
    "setAsGoalStateButtonClicked\0"
    "detectObjectsButtonClicked\0"
    "pickObjectButtonClicked\0"
    "placeObjectButtonClicked\0"
    "selectedDetectedObjectChanged\0"
    "detectedObjectChanged\0"
    "selectedSupportSurfaceChanged\0tabChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_rviz_plugin__MotionPlanningFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  329,    2, 0x06 /* Public */,
       3,    0,  330,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  331,    2, 0x08 /* Private */,
       5,    1,  332,    2, 0x08 /* Private */,
       7,    1,  335,    2, 0x08 /* Private */,
       8,    0,  338,    2, 0x08 /* Private */,
       9,    1,  339,    2, 0x08 /* Private */,
      11,    0,  342,    2, 0x08 /* Private */,
      12,    0,  343,    2, 0x08 /* Private */,
      13,    0,  344,    2, 0x08 /* Private */,
      14,    0,  345,    2, 0x08 /* Private */,
      15,    0,  346,    2, 0x08 /* Private */,
      16,    0,  347,    2, 0x08 /* Private */,
      17,    1,  348,    2, 0x08 /* Private */,
      19,    1,  351,    2, 0x08 /* Private */,
      20,    1,  354,    2, 0x08 /* Private */,
      22,    1,  357,    2, 0x08 /* Private */,
      23,    0,  360,    2, 0x08 /* Private */,
      24,    1,  361,    2, 0x08 /* Private */,
      26,    1,  364,    2, 0x08 /* Private */,
      28,    1,  367,    2, 0x08 /* Private */,
      30,    0,  370,    2, 0x08 /* Private */,
      31,    0,  371,    2, 0x08 /* Private */,
      32,    0,  372,    2, 0x08 /* Private */,
      33,    0,  373,    2, 0x08 /* Private */,
      34,    1,  374,    2, 0x08 /* Private */,
      34,    0,  377,    2, 0x28 /* Private | MethodCloned */,
      36,    0,  378,    2, 0x08 /* Private */,
      37,    1,  379,    2, 0x08 /* Private */,
      39,    0,  382,    2, 0x08 /* Private */,
      40,    0,  383,    2, 0x08 /* Private */,
      41,    1,  384,    2, 0x08 /* Private */,
      43,    0,  387,    2, 0x08 /* Private */,
      44,    0,  388,    2, 0x08 /* Private */,
      45,    0,  389,    2, 0x08 /* Private */,
      46,    1,  390,    2, 0x08 /* Private */,
      47,    1,  393,    2, 0x08 /* Private */,
      50,    1,  396,    2, 0x08 /* Private */,
      53,    0,  399,    2, 0x08 /* Private */,
      54,    0,  400,    2, 0x08 /* Private */,
      55,    0,  401,    2, 0x08 /* Private */,
      56,    0,  402,    2, 0x08 /* Private */,
      57,    0,  403,    2, 0x08 /* Private */,
      58,    0,  404,    2, 0x08 /* Private */,
      59,    0,  405,    2, 0x08 /* Private */,
      60,    0,  406,    2, 0x08 /* Private */,
      61,    0,  407,    2, 0x08 /* Private */,
      62,    0,  408,    2, 0x08 /* Private */,
      63,    2,  409,    2, 0x08 /* Private */,
      66,    0,  414,    2, 0x08 /* Private */,
      67,    0,  415,    2, 0x08 /* Private */,
      68,    0,  416,    2, 0x08 /* Private */,
      69,    0,  417,    2, 0x08 /* Private */,
      70,    0,  418,    2, 0x08 /* Private */,
      71,    0,  419,    2, 0x08 /* Private */,
      72,    0,  420,    2, 0x08 /* Private */,
      73,    0,  421,    2, 0x08 /* Private */,
      74,    0,  422,    2, 0x08 /* Private */,
      75,    0,  423,    2, 0x08 /* Private */,
      76,    0,  424,    2, 0x08 /* Private */,
      77,    1,  425,    2, 0x08 /* Private */,
      78,    0,  428,    2, 0x08 /* Private */,
      79,    1,  429,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   38,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 51,   52,
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
    QMetaType::Void, 0x80000000 | 64, QMetaType::Int,   49,   65,
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
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void moveit_rviz_plugin::MotionPlanningFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionPlanningFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->planningFinished(); break;
        case 1: _t->configChanged(); break;
        case 2: _t->databaseConnectButtonClicked(); break;
        case 3: _t->planningPipelineIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->planningAlgorithmIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->resetDbButtonClicked(); break;
        case 6: _t->approximateIKChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { bool _r = _t->computeCartesianPlan();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->computeJointSpacePlan();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->planButtonClicked(); break;
        case 10: _t->executeButtonClicked(); break;
        case 11: _t->planAndExecuteButtonClicked(); break;
        case 12: _t->stopButtonClicked(); break;
        case 13: _t->allowReplanningToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->allowLookingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->allowExternalProgramCommunication((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->pathConstraintsIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->onNewPlanningSceneState(); break;
        case 18: _t->startStateTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->goalStateTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->planningGroupTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->onClearOctomapClicked(); break;
        case 22: _t->clearScene(); break;
        case 23: _t->publishScene(); break;
        case 24: _t->publishSceneIfNeeded(); break;
        case 25: _t->setLocalSceneEdited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setLocalSceneEdited(); break;
        case 27: { bool _r = _t->isLocalSceneDirty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->sceneScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->sceneScaleStartChange(); break;
        case 30: _t->sceneScaleEndChange(); break;
        case 31: _t->shapesComboBoxChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->addSceneObject(); break;
        case 33: _t->removeSceneObject(); break;
        case 34: _t->selectedCollisionObjectChanged(); break;
        case 35: _t->objectPoseValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->collisionObjectChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 37: _t->imProcessFeedback((*reinterpret_cast< visualization_msgs::InteractiveMarkerFeedback(*)>(_a[1]))); break;
        case 38: _t->copySelectedCollisionObject(); break;
        case 39: _t->exportGeometryAsTextButtonClicked(); break;
        case 40: _t->importGeometryFromTextButtonClicked(); break;
        case 41: _t->saveSceneButtonClicked(); break;
        case 42: _t->planningSceneItemClicked(); break;
        case 43: _t->saveQueryButtonClicked(); break;
        case 44: _t->deleteSceneButtonClicked(); break;
        case 45: _t->deleteQueryButtonClicked(); break;
        case 46: _t->loadSceneButtonClicked(); break;
        case 47: _t->loadQueryButtonClicked(); break;
        case 48: _t->warehouseItemNameChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->loadStateButtonClicked(); break;
        case 50: _t->saveStartStateButtonClicked(); break;
        case 51: _t->saveGoalStateButtonClicked(); break;
        case 52: _t->removeStateButtonClicked(); break;
        case 53: _t->clearStatesButtonClicked(); break;
        case 54: _t->setAsStartStateButtonClicked(); break;
        case 55: _t->setAsGoalStateButtonClicked(); break;
        case 56: _t->detectObjectsButtonClicked(); break;
        case 57: _t->pickObjectButtonClicked(); break;
        case 58: _t->placeObjectButtonClicked(); break;
        case 59: _t->selectedDetectedObjectChanged(); break;
        case 60: _t->detectedObjectChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 61: _t->selectedSupportSurfaceChanged(); break;
        case 62: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotionPlanningFrame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionPlanningFrame::planningFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MotionPlanningFrame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionPlanningFrame::configChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_rviz_plugin::MotionPlanningFrame::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame.data,
    qt_meta_data_moveit_rviz_plugin__MotionPlanningFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_rviz_plugin::MotionPlanningFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_rviz_plugin::MotionPlanningFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_rviz_plugin__MotionPlanningFrame.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_rviz_plugin::MotionPlanningFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 63;
    }
    return _id;
}

// SIGNAL 0
void moveit_rviz_plugin::MotionPlanningFrame::planningFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_rviz_plugin::MotionPlanningFrame::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
