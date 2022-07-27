/****************************************************************************
** Meta object code from reading C++ file 'robot_poses_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/robot_poses_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robot_poses_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget_t {
    QByteArrayData data[22];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget_t qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "moveit_setup_assistant::Robot..."
QT_MOC_LITERAL(1, 41, 13), // "showNewScreen"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 12), // "editSelected"
QT_MOC_LITERAL(4, 69, 17), // "editDoubleClicked"
QT_MOC_LITERAL(5, 87, 3), // "row"
QT_MOC_LITERAL(6, 91, 6), // "column"
QT_MOC_LITERAL(7, 98, 14), // "previewClicked"
QT_MOC_LITERAL(8, 113, 12), // "previous_row"
QT_MOC_LITERAL(9, 126, 15), // "previous_column"
QT_MOC_LITERAL(10, 142, 14), // "deleteSelected"
QT_MOC_LITERAL(11, 157, 11), // "doneEditing"
QT_MOC_LITERAL(12, 169, 13), // "cancelEditing"
QT_MOC_LITERAL(13, 183, 16), // "loadJointSliders"
QT_MOC_LITERAL(14, 200, 8), // "selected"
QT_MOC_LITERAL(15, 209, 15), // "showDefaultPose"
QT_MOC_LITERAL(16, 225, 9), // "playPoses"
QT_MOC_LITERAL(17, 235, 16), // "updateRobotModel"
QT_MOC_LITERAL(18, 252, 11), // "std::string"
QT_MOC_LITERAL(19, 264, 4), // "name"
QT_MOC_LITERAL(20, 269, 5), // "value"
QT_MOC_LITERAL(21, 275, 13) // "publishJoints"

    },
    "moveit_setup_assistant::RobotPosesWidget\0"
    "showNewScreen\0\0editSelected\0"
    "editDoubleClicked\0row\0column\0"
    "previewClicked\0previous_row\0previous_column\0"
    "deleteSelected\0doneEditing\0cancelEditing\0"
    "loadJointSliders\0selected\0showDefaultPose\0"
    "playPoses\0updateRobotModel\0std::string\0"
    "name\0value\0publishJoints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__RobotPosesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    2,   76,    2, 0x08 /* Private */,
       7,    4,   81,    2, 0x08 /* Private */,
      10,    0,   90,    2, 0x08 /* Private */,
      11,    0,   91,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    2,   98,    2, 0x08 /* Private */,
      21,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Double,   19,   20,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::RobotPosesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotPosesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showNewScreen(); break;
        case 1: _t->editSelected(); break;
        case 2: _t->editDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->previewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->deleteSelected(); break;
        case 5: _t->doneEditing(); break;
        case 6: _t->cancelEditing(); break;
        case 7: _t->loadJointSliders((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->showDefaultPose(); break;
        case 9: _t->playPoses(); break;
        case 10: _t->updateRobotModel((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->publishJoints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::string >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::RobotPosesWidget::staticMetaObject = { {
    &SetupScreenWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget.data,
    qt_meta_data_moveit_setup_assistant__RobotPosesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::RobotPosesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::RobotPosesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__RobotPosesWidget.stringdata0))
        return static_cast<void*>(this);
    return SetupScreenWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::RobotPosesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SetupScreenWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_moveit_setup_assistant__SliderWidget_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__SliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__SliderWidget_t qt_meta_stringdata_moveit_setup_assistant__SliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "moveit_setup_assistant::Slide..."
QT_MOC_LITERAL(1, 37, 17), // "jointValueChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 11), // "std::string"
QT_MOC_LITERAL(4, 68, 4), // "name"
QT_MOC_LITERAL(5, 73, 5), // "value"
QT_MOC_LITERAL(6, 79, 16), // "changeJointValue"
QT_MOC_LITERAL(7, 96, 17) // "changeJointSlider"

    },
    "moveit_setup_assistant::SliderWidget\0"
    "jointValueChanged\0\0std::string\0name\0"
    "value\0changeJointValue\0changeJointSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__SliderWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   34,    2, 0x08 /* Private */,
       7,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void moveit_setup_assistant::SliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jointValueChanged((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->changeJointValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeJointSlider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::string >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliderWidget::*)(const std::string & , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderWidget::jointValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::SliderWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__SliderWidget.data,
    qt_meta_data_moveit_setup_assistant__SliderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::SliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::SliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__SliderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::SliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void moveit_setup_assistant::SliderWidget::jointValueChanged(const std::string & _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
