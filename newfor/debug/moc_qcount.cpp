/****************************************************************************
** Meta object code from reading C++ file 'qcount.h'
**
** Created: Tue Jun 13 16:20:11 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcount.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qcount[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      58,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qcount[] = {
    "qcount\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0change_EX()\0"
};

const QMetaObject qcount::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qcount,
      qt_meta_data_qcount, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qcount::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qcount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qcount::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qcount))
        return static_cast<void*>(const_cast< qcount*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qcount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: change_EX(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
