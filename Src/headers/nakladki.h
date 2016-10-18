/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * nakladki.h
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
#ifndef NAKLADKI_H
#define NAKLADKI_H

#include <QDialog>

namespace Ui {
class Nakladki;
}

class Nakladki : public QDialog
{
    Q_OBJECT

public:
    explicit Nakladki(QString num,QWidget *parent = 0);
    ~Nakladki();

private slots:
    void on_OK_button_clicked();

private:
    Ui::Nakladki *ui;
};

#endif // NAKLADKI_H
