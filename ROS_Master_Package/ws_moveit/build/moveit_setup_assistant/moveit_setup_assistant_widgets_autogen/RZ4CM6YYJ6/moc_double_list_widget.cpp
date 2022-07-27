/****************************************************************************
** Meta object code from reading C++ file 'double_list_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit/moveit_setup_assistant/src/widgets/double_list_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'double_list_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget_t {
    QByteArrayData data[14];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget_t qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "moveit_setup_assistant::Doubl..."
QT_MOC_LITERAL(1, 41, 11), // "doneEditing"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 13), // "cancelEditing"
QT_MOC_LITERAL(4, 68, 15), // "previewSelected"
QT_MOC_LITERAL(5, 84, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(6, 109, 16), // "selectionUpdated"
QT_MOC_LITERAL(7, 126, 23), // "selectDataButtonClicked"
QT_MOC_LITERAL(8, 150, 25), // "deselectDataButtonClicked"
QT_MOC_LITERAL(9, 176, 19), // "previewSelectedLeft"
QT_MOC_LITERAL(10, 196, 14), // "QItemSelection"
QT_MOC_LITERAL(11, 211, 8), // "selected"
QT_MOC_LITERAL(12, 220, 10), // "deselected"
QT_MOC_LITERAL(13, 231, 20) // "previewSelectedRight"

    },
    "moveit_setup_assistant::DoubleListWidget\0"
    "doneEditing\0\0cancelEditing\0previewSelected\0"
    "std::vector<std::string>\0selectionUpdated\0"
    "selectDataButtonClicked\0"
    "deselectDataButtonClicked\0previewSelectedLeft\0"
    "QItemSelection\0selected\0deselected\0"
    "previewSelectedRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_moveit_setup_assistant__DoubleListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    2,   62,    2, 0x08 /* Private */,
      13,    2,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,

       0        // eod
};

void moveit_setup_assistant::DoubleListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DoubleListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doneEditing(); break;
        case 1: _t->cancelEditing(); break;
        case 2: _t->previewSelected((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 3: _t->selectionUpdated(); break;
        case 4: _t->selectDataButtonClicked(); break;
        case 5: _t->deselectDataButtonClicked(); break;
        case 6: _t->previewSelectedLeft((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 7: _t->previewSelectedRight((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DoubleListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleListWidget::doneEditing)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DoubleListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleListWidget::cancelEditing)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DoubleListWidget::*)(std::vector<std::string> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleListWidget::previewSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DoubleListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleListWidget::selectionUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject moveit_setup_assistant::DoubleListWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget.data,
    qt_meta_data_moveit_setup_assistant__DoubleListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *moveit_setup_assistant::DoubleListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *moveit_setup_assistant::DoubleListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_moveit_setup_assistant__DoubleListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int moveit_setup_assistant::DoubleListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void moveit_setup_assistant::DoubleListWidget::doneEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void moveit_setup_assistant::DoubleListWidget::cancelEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void moveit_setup_assistant::DoubleListWidget::previewSelected(std::vector<std::string> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void moveit_setup_assistant::DoubleListWidget::selectionUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
