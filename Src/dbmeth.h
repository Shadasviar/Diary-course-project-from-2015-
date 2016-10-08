/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * dbmeth.h
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
#ifndef DBMETH_H
#define DBMETH_H
#include "row.h"
#include <string>
#include "czas.h"
#include "dbio.h"
#include <QVariant>
#include <QList>

class dbmeth : public dbio
{
public:
    enum operation {do_nothing, del};
    enum order{asc, desc};
    enum type_of_find_day{previous, current, next};

    dbmeth();
    void Add(row r);
    void DelRow(int index);
    row GetRow(int index);

    QString ShowNearest(QList<row> Row);
    QString transferMes();
    QString formatDate(int index, QList<row> &Row);
    int Nakladka(int index);
    QString nakladkiMes();
    int Transfer(operation index);
    bool GetPast(int index);
    void find(string finded);
    void findToday(type_of_find_day index);
    void filterOff();

    int RowsNum(); 
    QVariant getHeader(int ind);
    int getColumns();
    bool getRowSwaped();

    void sortByColumn(QList<row> &Row, order order, int i_column);

    QList<row> Row;
    QList<row>::iterator ite;


private:   
    int counter;
    bool rowSwaped;
    QList<row> bufer;
    bool PastTransfer(QList<row>::iterator ite, int row, operation index);
    long setDate(row r);
    string format_date_string(QString str, const czas &cz);


/*Template functions section
*
*
*--------------------------------------------------------------------------------------------------------
* */

public:

    template <typename T>
    void EditRow(int index, int field, T value)
    {
        row r;
        r=GetRow(index);
        *(T*)r.fields[field] = value;
        r.SetTimeBySecFrom70();
        Row.replace(index,r);
    }


    template <typename T>
    void sort_by_column(QList<row> &Row, dbmeth::order order, int i_column)
    {
        switch(order){
        case asc:
            sort(Row.begin(),Row.end(),[i_column](row r1, row r2){
                return *(T*)r1.fields[i_column] < *(T*)r2.fields[i_column];
            });
            break;
        case desc:
            sort(Row.begin(),Row.end(),[i_column](row r1, row r2){
                return *(T*)r1.fields[i_column] > *(T*)r2.fields[i_column];
            });
            break;
        default:
            break;
        }
    }

};

#endif // DBMETH_H
