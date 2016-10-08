/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * dbinterface.h
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
#ifndef DBINTERFACE_H
#define DBINTERFACE_H
#include <QAbstractTableModel>
#include <QObject>
#include "dbmeth.h"

class dbinterface: public QAbstractTableModel
{
    Q_OBJECT

public:
    /*
     * Theese functions returns notifications
     * about their success/unsuccess exit status
     * for application notification line
     * */
    dbinterface();
    QString nearest();
    void AddRow();
    QString DelRow(int index);
    QString Save();
    QString filterOff();
    QString nakladki();
    void delPast();

    void find(QString finded);
    void findToday(dbmeth::type_of_find_day index);

protected:
    bool insertRows(int row, int count, const QModelIndex &parent) override;
    bool removeRows(int row, int count, const QModelIndex &parent) override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;

    Qt::ItemFlags flags(const QModelIndex &index) const override;

    QVariant data(const QModelIndex &index, int role) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    int columnCount(const QModelIndex &parent) const override;
    int rowCount(const QModelIndex &parent) const override;

    dbmeth *dbm;

private slots:
    void sortByColumn(int column, Qt::SortOrder order);
};

#endif // DBINTERFACE_H
