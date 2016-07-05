/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * transfer.h
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
#ifndef TRANSFER_H
#define TRANSFER_H

#include <QDialog>
#include "dbinterface.h"

namespace Ui {
class Transfer;
}

class Transfer : public QDialog
{
    Q_OBJECT

public:
    explicit Transfer(dbinterface *db,QString num,QWidget *parent = 0);
    ~Transfer();

private slots:
    void on_Leave_button_clicked();
    void on_Del_Button_trans_clicked();

private:
    dbinterface *dbi;
    Ui::Transfer *ui;
};

#endif // TRANSFER_H
