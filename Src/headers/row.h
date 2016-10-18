/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * row.h
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
#ifndef ROW_H
#define ROW_H
#include <string>
#include <iostream>
#include <QVariant>
#include <QString>
#include <QByteArray>
#include <QDataStream>
#include <tuple>

using namespace std;
class row
{
public:   

    int year{0};
    int month{0};
    int day{0};
    int hour{0};
    int minutes {0};
    int duration {0};
    string name {" "};
    string place {" "};

    long long date {0};
    long long time {0};

    static constexpr uint NUM_VARIABLES = 8;
    void* fields[NUM_VARIABLES] = {&date, &time, &duration, &name, &place};
    enum types {t_long_long, t_long_long_last, t_int, t_int_last = 2, t_string, t_string_last};

    row() =default;
    /*They don't copy fields, it will brake program*/
    row(const row&);
    row &operator =(const row &in);

    friend QDataStream &operator <<(QDataStream &stream, const row &A);
    friend QDataStream &operator >>(QDataStream &stream, row &A);

    void SetTimeBySecFrom70();

    QVariant getItem(int ind);
    static QString getHeader(int ind);
    static int getColumns();
    static int getVars();

private:
    static QString header[];
};

#endif // ROW_H
