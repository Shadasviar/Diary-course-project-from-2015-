#ifndef ROW_H
#define ROW_H
#include <string>
#include <iostream>
#include <QVariant>
#include <QString>
#include <QByteArray>
#include <QDataStream>
#include <tuple>
#define NUM_VARIABLES 8

using namespace std;
class row
{
public:   

    int year;
    int month;
    int day;
    int hour;
    int minutes;
    int duration;
    string name;
    string place;

    long long date;
    long long time;

    //void* fields[NUM_VARIABLES] = {&year, &month, &day, &hour, &minutes, &duration, &name, &place};
    void* fields[NUM_VARIABLES] = {&date, &time, &duration, &name, &place};
    enum types {t_long_long, t_long_long_last, t_int, t_int_last = 2, t_string, t_string_last};


    friend QDataStream &operator <<(QDataStream &stream, const row &A);
    friend QDataStream &operator >>(QDataStream &stream, row &A);

    row();
    row(const row &);
    row & operator=(const row &);
    void SetTimeBySecFrom70();

    QVariant getItem(int ind);
    static QString getHeader(int ind);
    static int getColumns();
    static int getVars();

private:
    static QString header[];
};

#endif // ROW_H
