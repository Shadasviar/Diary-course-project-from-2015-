#include "row.h"
#include <qvariant.h>
#include <string>
#include <sstream>
#include <QString>
#include <QtCore>

QString row::header[]={QString::fromUtf8(QT_TR_NOOP("Date")),
                       QString::fromUtf8(QT_TR_NOOP("Time")),
                       QString::fromUtf8(QT_TR_NOOP("During, min")),
                       QString::fromUtf8(QT_TR_NOOP("Name")),
                       QString::fromUtf8(QT_TR_NOOP("Place"))};

QDataStream &operator <<(QDataStream &stream, const row &A)
{
    stream << A.year;
    stream << A.month;
    stream << A.day;
    stream << A.hour;
    stream << A.minutes;
    stream << A.duration;
    stream << A.date;
    stream << QString::fromStdString(A.name);
    stream << QString::fromStdString(A.place);
    return stream;
}

QDataStream &operator >>(QDataStream &stream, row &A)
{
    stream >> A.year;
    stream >> A.month;
    stream >> A.day;
    stream >> A.hour;
    stream >> A.minutes;
    stream >> A.duration;
    stream >> A.date;
    QString temp;
    stream >> temp;
    A.name = temp.toStdString();
    temp.clear();
    stream >> temp;
    A.place = temp.toStdString();
    return stream;
}

row::row(){
    year=0;
    month=0;
    day=0;
    hour=0;
    minutes=0;
    duration=0;
    date=0;
    name=" ";
    place=" ";
}

QVariant row::getItem(int ind){
    QString qs;
    switch (ind) {
    case 0:
        if(year==0){
            qs="0000";
        }else{
            qs = QString::number(year);
        }
        qs.append(".");
        if(month<10) qs.append("0");
        qs.append(QString::number(month));
        qs.append(".");
        if(day<10) qs.append("0");
        qs.append(QString::number(day));
        return qs;
        break;QVariant(getName());
    case 1:
        if(hour<10){
            qs="0";
            qs.append(QString::number(hour));
        }else{
            qs=QString::number(hour);
        }
        qs.append(":");
        if(minutes<10) qs.append("0");
        qs.append(QString::number(minutes));
        return qs;
        break;
    case 2:
        return duration;
        break;
    case 3:
        qs=QString::fromStdString(name);
        return qs;
        break;
    case 4:
        qs=QString::fromStdString(place);
        return qs;
        break;
    default:
        qs = "error";
        return qs;
        break;
    }
}

QString row::getHeader(int ind)
{
    return header[ind];
}

int row::getColumns()
{
    return sizeof(header)/sizeof(header[0]);
}
