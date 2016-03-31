#ifndef CZAS_H
#define CZAS_H

class czas
{
public:
    int year;
    int month;
    int day;
    int hour;
    int min;
    long int secfrom70;

    czas();
    long int GetUnixTime(czas &A);

private:
    int GetCurrentTime();
};

#endif // CZAS_H
