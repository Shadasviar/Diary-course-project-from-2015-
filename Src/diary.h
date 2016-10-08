/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * diary.h
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
#ifndef DIARY_H
#define DIARY_H

#include <QWidget>
#include "dbinterface.h"

namespace Ui {
class Diary;
}

class Diary : public QWidget
{
    Q_OBJECT

public:
    explicit Diary(QWidget *parent = 0);
    dbinterface dbi;
    void changeFontSize(QFont font);
    ~Diary();

private slots:

    void on_ExitButton_clicked();
    void on_DelRowButton_clicked();
    void on_AddRowButton_clicked();
    void on_SaveButton_clicked();
    void on_Info_Button_clicked();
    void on_find_button_clicked();
    void on_today_button_clicked();
    void on_last_day_button_clicked();
    void on_next_day_button_clicked();
    void on_return_button_clicked();
    void on_nakladki_button_clicked();
    void on_Settings_button_clicked();

signals:
    void sortIndicatorChanged ( int logicalIndex, Qt::SortOrder order );

private:
    Ui::Diary *ui;
};

#endif // DIARY_H
