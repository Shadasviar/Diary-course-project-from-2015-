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


