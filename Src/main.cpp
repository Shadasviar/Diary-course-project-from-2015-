/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * main.cpp
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
#include "diary.h"
#include <QApplication>
#include <QTextCodec>
#include <QTranslator>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator *qt_translator = new QTranslator;
    QString file_translate = QApplication::applicationDirPath () + "/by.qm";
        if ( !qt_translator->load(file_translate)) {
          delete qt_translator;
        }
        else{
            qApp->installTranslator( qt_translator );
        }
    //QTextCodec::setCodecForCStrings (QTextCodec::codecForName ("utf-8"));
    //QTextCodec::setCodecForTr (QTextCodec::codecForName ("utf-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName ("utf-8"));
    Diary w;
    w.show();

    return a.exec();
}
