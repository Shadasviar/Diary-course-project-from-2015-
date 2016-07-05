/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 2 -*-  */
/*
 * This file is part of Diary. 
 * czas.cpp
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
#include "czas.h"
#include <ctime>
#include <iostream>

using namespace std;

czas::czas()
{
    time_t sec;
    struct tm * timeinf;
    time(&sec);
    timeinf= localtime(&sec);
    year= timeinf->tm_year+1900;
    month= timeinf->tm_mon+1;
    day= timeinf->tm_mday;
    hour= timeinf->tm_hour;
    min= timeinf->tm_min;
    secfrom70=GetCurrentTime();
}

long czas::GetUnixTime(czas &A)
{
    time_t sec;
    struct tm * timeinf;
    time(&sec);
    timeinf= localtime(&sec);
    timeinf->tm_year=A.year-1900;
    timeinf->tm_mon=A.month-1;
    timeinf->tm_mday=A.day;
    timeinf->tm_hour=A.hour;
    timeinf->tm_min=A.min;
    timeinf->tm_sec=0;
    sec= mktime(timeinf);
    return sec;
}


int czas::GetCurrentTime()
{
    time_t sec;
    sec= time(NULL);
    return sec;
}


