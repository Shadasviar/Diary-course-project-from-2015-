/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * settings.cpp
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
#include "settings.h"
#include "ui_settings.h"
#include "diary.h"

Settings::Settings(QWidget *parent, Diary *diary_in) :
    QWizardPage(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->Font_size_field->setValidator(new QIntValidator(5,100,this));
    diary = diary_in;
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_Apply_settings_button_clicked()
{
    QString tmp = ui->Font_size_field->text();
    int font_size = tmp.toInt();
    font_for_widget.setPixelSize(font_size);
    diary->changeFontSize(font_for_widget);
    this->setFont(font_for_widget);
}
