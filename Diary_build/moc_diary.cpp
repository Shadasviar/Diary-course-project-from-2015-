/****************************************************************************
** Meta object code from reading C++ file 'diary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Src/diary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Diary_t {
    QByteArrayData data[18];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Diary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Diary_t qt_meta_stringdata_Diary = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Diary"
QT_MOC_LITERAL(1, 6, 20), // "sortIndicatorChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "logicalIndex"
QT_MOC_LITERAL(4, 41, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(5, 55, 5), // "order"
QT_MOC_LITERAL(6, 61, 21), // "on_ExitButton_clicked"
QT_MOC_LITERAL(7, 83, 23), // "on_DelRowButton_clicked"
QT_MOC_LITERAL(8, 107, 23), // "on_AddRowButton_clicked"
QT_MOC_LITERAL(9, 131, 21), // "on_SaveButton_clicked"
QT_MOC_LITERAL(10, 153, 22), // "on_Info_Button_clicked"
QT_MOC_LITERAL(11, 176, 22), // "on_find_button_clicked"
QT_MOC_LITERAL(12, 199, 23), // "on_today_button_clicked"
QT_MOC_LITERAL(13, 223, 26), // "on_last_day_button_clicked"
QT_MOC_LITERAL(14, 250, 26), // "on_next_day_button_clicked"
QT_MOC_LITERAL(15, 277, 24), // "on_return_button_clicked"
QT_MOC_LITERAL(16, 302, 26), // "on_nakladki_button_clicked"
QT_MOC_LITERAL(17, 329, 26) // "on_Settings_button_clicked"

    },
    "Diary\0sortIndicatorChanged\0\0logicalIndex\0"
    "Qt::SortOrder\0order\0on_ExitButton_clicked\0"
    "on_DelRowButton_clicked\0on_AddRowButton_clicked\0"
    "on_SaveButton_clicked\0on_Info_Button_clicked\0"
    "on_find_button_clicked\0on_today_button_clicked\0"
    "on_last_day_button_clicked\0"
    "on_next_day_button_clicked\0"
    "on_return_button_clicked\0"
    "on_nakladki_button_clicked\0"
    "on_Settings_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Diary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

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

       0        // eod
};

void Diary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Diary *_t = static_cast<Diary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortIndicatorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 1: _t->on_ExitButton_clicked(); break;
        case 2: _t->on_DelRowButton_clicked(); break;
        case 3: _t->on_AddRowButton_clicked(); break;
        case 4: _t->on_SaveButton_clicked(); break;
        case 5: _t->on_Info_Button_clicked(); break;
        case 6: _t->on_find_button_clicked(); break;
        case 7: _t->on_today_button_clicked(); break;
        case 8: _t->on_last_day_button_clicked(); break;
        case 9: _t->on_next_day_button_clicked(); break;
        case 10: _t->on_return_button_clicked(); break;
        case 11: _t->on_nakladki_button_clicked(); break;
        case 12: _t->on_Settings_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Diary::*_t)(int , Qt::SortOrder );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Diary::sortIndicatorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Diary::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Diary.data,
      qt_meta_data_Diary,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Diary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Diary::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Diary.stringdata0))
        return static_cast<void*>(const_cast< Diary*>(this));
    return QWidget::qt_metacast(_clname);
}

int Diary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Diary::sortIndicatorChanged(int _t1, Qt::SortOrder _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
