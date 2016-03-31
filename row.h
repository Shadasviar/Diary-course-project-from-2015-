#ifndef ROW_H
#define ROW_H
#include <string>
#include <iostream>
#include <QVariant>
#include <QString>
#include <QByteArray>
#include <QDataStream>

using namespace std;
class row
{
public:
    string name;
    string place;
    long long date;
    int year;
    int month;
    int day;
    int hour;
    int minutes;
    int duration;

    /*friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int file_version){
        ar & name;
        ar & place;
        ar & date;
        ar & year;
        ar & month;
        ar & day;
        ar & hour;
        ar & minutes;
        ar & duration;
     };*/
    friend QDataStream &operator <<(QDataStream &stream, const row &A);
    friend QDataStream &operator >>(QDataStream &stream, row &A);

    row();
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
