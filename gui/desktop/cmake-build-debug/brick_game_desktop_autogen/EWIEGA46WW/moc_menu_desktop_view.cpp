/****************************************************************************
** Meta object code from reading C++ file 'menu_desktop_view.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../menu_desktop_view.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_desktop_view.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuDesktopView_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuDesktopView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuDesktopView_t qt_meta_stringdata_MenuDesktopView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MenuDesktopView"
QT_MOC_LITERAL(1, 16, 14), // "startTimerGame"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "const char*"
QT_MOC_LITERAL(4, 44, 8), // "lib_name"
QT_MOC_LITERAL(5, 53, 22), // "on_snakeButton_clicked"
QT_MOC_LITERAL(6, 76, 23), // "on_tetrisButton_clicked"
QT_MOC_LITERAL(7, 100, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(8, 122, 14) // "exit_main_menu"

    },
    "MenuDesktopView\0startTimerGame\0\0"
    "const char*\0lib_name\0on_snakeButton_clicked\0"
    "on_tetrisButton_clicked\0on_exitButton_clicked\0"
    "exit_main_menu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuDesktopView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuDesktopView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuDesktopView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startTimerGame((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->on_snakeButton_clicked(); break;
        case 2: _t->on_tetrisButton_clicked(); break;
        case 3: _t->on_exitButton_clicked(); break;
        case 4: _t->exit_main_menu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuDesktopView::*)(const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDesktopView::startTimerGame)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuDesktopView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MenuDesktopView.data,
    qt_meta_data_MenuDesktopView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuDesktopView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuDesktopView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuDesktopView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MenuDesktopView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MenuDesktopView::startTimerGame(const char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
