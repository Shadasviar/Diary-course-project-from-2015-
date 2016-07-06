/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * settings.h
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
#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWizardPage>
#include "diary.h"
#include <QDataStream>

namespace Ui {
class Settings;
}

class Settings : public QWizardPage
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent, Diary *diary_in);
    void init_settings();
    ~Settings();
    QFont font_for_widget;

private slots:
    void on_Apply_settings_button_clicked();

    void on_Cancel_settings_button_clicked();

    void on_Save_settings_button_clicked();

private:
    Ui::Settings *ui;
    Diary *diary;

    void write_to_file();
    void read_file();
    friend QDataStream &operator <<(QDataStream &stream, const Settings &A);
    friend QDataStream &operator >>(QDataStream &stream, Settings &A);

    int font_size = 13;
};

#endif // SETTINGS_H
