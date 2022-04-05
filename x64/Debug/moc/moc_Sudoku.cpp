/****************************************************************************
** Meta object code from reading C++ file 'Sudoku.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Sudoku.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Sudoku.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sudoku_t {
    const uint offsetsAndSize[30];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Sudoku_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Sudoku_t qt_meta_stringdata_Sudoku = {
    {
QT_MOC_LITERAL(0, 6), // "Sudoku"
QT_MOC_LITERAL(7, 10), // "on_Stopped"
QT_MOC_LITERAL(18, 0), // ""
QT_MOC_LITERAL(19, 16), // "on_Clear_clicked"
QT_MOC_LITERAL(36, 20), // "on_SolveSlow_clicked"
QT_MOC_LITERAL(57, 16), // "on_Solve_clicked"
QT_MOC_LITERAL(74, 21), // "on_Undo_Solve_clicked"
QT_MOC_LITERAL(96, 25), // "on_Stop_Recussion_clicked"
QT_MOC_LITERAL(122, 15), // "DisplayNewBoard"
QT_MOC_LITERAL(138, 9), // "int[9][9]"
QT_MOC_LITERAL(148, 9), // "inputGrid"
QT_MOC_LITERAL(158, 17), // "DisplaySingleItem"
QT_MOC_LITERAL(176, 1), // "i"
QT_MOC_LITERAL(178, 1), // "j"
QT_MOC_LITERAL(180, 1) // "n"

    },
    "Sudoku\0on_Stopped\0\0on_Clear_clicked\0"
    "on_SolveSlow_clicked\0on_Solve_clicked\0"
    "on_Undo_Solve_clicked\0on_Stop_Recussion_clicked\0"
    "DisplayNewBoard\0int[9][9]\0inputGrid\0"
    "DisplaySingleItem\0i\0j\0n"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sudoku[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    1,   68,    2, 0x0a,    7 /* Public */,
      11,    3,   71,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,

       0        // eod
};

void Sudoku::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sudoku *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Stopped(); break;
        case 1: _t->on_Clear_clicked(); break;
        case 2: _t->on_SolveSlow_clicked(); break;
        case 3: _t->on_Solve_clicked(); break;
        case 4: _t->on_Undo_Solve_clicked(); break;
        case 5: _t->on_Stop_Recussion_clicked(); break;
        case 6: _t->DisplayNewBoard((*reinterpret_cast< int(*)[9][9]>(_a[1]))); break;
        case 7: _t->DisplaySingleItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Sudoku::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Sudoku::on_Stopped)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Sudoku::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Sudoku.offsetsAndSize,
    qt_meta_data_Sudoku,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Sudoku_t
, QtPrivate::TypeAndForceComplete<Sudoku, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Sudoku::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sudoku::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sudoku.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Sudoku::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Sudoku::on_Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
