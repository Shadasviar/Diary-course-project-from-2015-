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

    void* fields[NUM_VARIABLES] = {&year, &month, &day, &hour, &minutes, &duration, &name, &place};


    friend QDataStream &operator <<(QDataStream &stream, const row &A);
    friend QDataStream &operator >>(QDataStream &stream, row &A);

    row();
    row(const row &);
    row & operator=(const row &);

    QVariant getItem(int ind);
    static QString getHeader(int ind);
    static int getColumns();

    static bool compareDateAsc(row d1, row d2) {return d1.date<d2.date;}
    static bool compareDateDes(row d1, row d2) {return d1.date>d2.date;}
    static bool compareTimeAsc(row t1, row t2) {return t1.hour*60+t1.minutes<t2.hour*60+t2.minutes;}
    static bool compareTimeDes(row t1, row t2) {return t1.hour*60+t1.minutes>t2.hour*60+t2.minutes;}
    static bool compareDurationAsc(row d1, row d2) {return d1.duration<d2.duration;}
    static bool compareDurationDes(row d1, row d2) {return d1.duration>d2.duration;}
    static bool compareNameAsc(row n1, row n2) {return n1.name<n2.name;}
    static bool compareNameDes(row n1, row n2) {return n1.name>n2.name;}
    static bool comparePlaceAsc(row n1, row n2) {return n1.place<n2.place;}
    static bool comparePlaceDes(row n1, row n2) {return n1.place>n2.place;}

private:
    static QString header[];
};

#endif // ROW_H
