/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary.
 * settings_manager.h
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

#ifndef SETTINGS_MANAGER_H
#define SETTINGS_MANAGER_H
#include <QDataStream>

class Settings_manager{
public:
    static Settings_manager& get_instance();
    void save_settings();

    void operator=(Settings_manager const&) =delete;
    Settings_manager(Settings_manager const&) =delete;

    int font_size(){return _font_size;}
    void font_size(int x){_font_size = x;}

    bool use_96dpi(){return _use_96dpi;}
    void use_96dpi(bool x){_use_96dpi = x;}

private:
    Settings_manager();
    void write_to_file();
    void read_file();
    friend QDataStream &operator <<(QDataStream &stream, const Settings_manager &A);
    friend QDataStream &operator >>(QDataStream &stream, Settings_manager &A);

    int _font_size = 13;
    bool _use_96dpi = true;

};

#endif // SETTINGS_MANAGER_H
