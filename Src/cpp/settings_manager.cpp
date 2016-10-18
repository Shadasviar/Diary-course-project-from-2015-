/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary.
 * settings_manager.cpp
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

#include "settings_manager.h"
#include <QFile>
#include <iostream>

using std::cout;

Settings_manager& Settings_manager::get_instance()
{
    static Settings_manager instance;
    return instance;
}

void Settings_manager::save_settings()
{
    write_to_file();
}

Settings_manager::Settings_manager()
{
    read_file();
}


void Settings_manager::write_to_file()
{
    QFile File(QString("settings"));
    File.open(QFile::WriteOnly);
    QDataStream inFile(&File);
    inFile.setVersion(QDataStream::Qt_5_4);
    inFile << *this;
    File.flush();
    File.close();
    cout<<"Writing success\n";
}


void Settings_manager::read_file()
{
    QFile File(QString("settings"));
    File.open(QFile::ReadOnly);
    if(File.isOpen()){
        QDataStream outFile(&File);
        outFile.setVersion(QDataStream::Qt_5_4);
        outFile >> *this;
        File.close();
        cout<<"Reading success\n";
    }
    else{
        cout<<"Couldn't open file\n";
    }
}


QDataStream &operator >>(QDataStream &stream, Settings_manager &A)
{
    stream >> A._font_size;
    stream >> A._use_96dpi;
    return stream;
}


QDataStream &operator <<(QDataStream &stream, const Settings_manager &A)
{
    stream << A._font_size;
    stream << A._use_96dpi;
    return stream;
}
