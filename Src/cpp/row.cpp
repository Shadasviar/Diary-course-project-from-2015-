/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * row.cpp
 * Copyright (C) Uladzislau Harbuz 2016 
 * 
 * Diary is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Diary is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "row.h"
#include <qvariant.h>
#include <string>
#include <sstream>
#include <QString>
#include <QtCore>
#include <ctime>

QString row::header[]={QString::fromUtf8(QT_TR_NOOP("Date")),
                       QString::fromUtf8(QT_TR_NOOP("Time")),
                       QString::fromUtf8(QT_TR_NOOP("During, min")),
                       QString::fromUtf8(QT_TR_NOOP("Name")),
                       QString::fromUtf8(QT_TR_NOOP("Place"))};


row::row(const row &in){
    year = in.year;
    month = in.month;
    day = in.day;
    hour = in.hour;
    minutes = in.minutes;
    date = in.date;
    duration = in.duration;
    name = in.name;
    place = in.place;
    time = in.time;
}


row &row::operator=(const row &in){
    year = in.year;
    month = in.month;
    day = in.day;
    hour = in.hour;
    minutes = in.minutes;
    date = in.date;
    duration = in.duration;
    name = in.name;
    place = in.place;
    time = in.time;
    return *this;
}



QDataStream &operator <<(QDataStream &stream, const row &A)
{
    stream << A.year;
    stream << A.month;
    stream << A.day;
    stream << A.hour;
    stream << A.minutes;
    stream << A.duration;
    stream << A.date;
    stream << A.time;
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
    stream >> A.time;
    QString temp;
    stream >> temp;
    A.name = temp.toStdString();
    temp.clear();
    stream >> temp;
    A.place = temp.toStdString();
    return stream;
}


void row::SetTimeBySecFrom70()
{
    time_t sec = (time_t)date;
    struct tm *timeinf;
    timeinf = localtime(&sec);

    year = timeinf->tm_year + 1900;
    month = timeinf->tm_mon + 1;
    day = timeinf->tm_mday;
    hour = timeinf->tm_hour;
    minutes = timeinf->tm_min;
    time = (hour*60 + minutes)*60;
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

int row::getVars()
{
    return sizeof(fields)/sizeof(fields[0]);
}
