/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * dbio.cpp
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
#include "dbio.h"
#include <fstream>
#include <ios>
#include <QList>
#include <QFile>
#include <iostream>

using namespace std;

dbio::dbio()
{
}

void dbio::Write(QList<row> &Row){
    QFile dbFile(QString("db.bin"));
    dbFile.open(QFile::WriteOnly);
    QDataStream inFile(&dbFile);
    inFile.setVersion(QDataStream::Qt_5_4);
    inFile<<Row;
    dbFile.flush();
    dbFile.close();
    cout<<"Writing success\n";
}

void dbio::Read(QList<row> &lst){
        QFile dbFile(QString("db.bin"));
        dbFile.open(QFile::ReadOnly);
        if(dbFile.isOpen()){
            QDataStream outFile(&dbFile);
            outFile.setVersion(QDataStream::Qt_5_4);
            outFile >> lst;
            dbFile.close();
            cout<<"Reading success\n";
        }
        else{
            cout<<"Couldn't open file\n";
        }
}

