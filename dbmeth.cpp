#include "dbmeth.h"
#include "czas.h"
#include <QDebug>
#include <string>
#include <algorithm>

#define TOUPPER(in_string) transform(in_string.begin(),in_string.end(),in_string.begin(),::toupper);

using namespace std;

dbmeth::dbmeth()
{
    Read(Row);
    rowSwaped=false;
    counter=0;
}

void dbmeth::Add(row r)
{
    r.date=setDate(r);
    Row<<r;
}

void dbmeth::DelRow(int index)
{
        if(index<=Row.size()){
            Row.removeAt(index);
        }else{
            cout<<"no rows having this index"<<endl;
        }
}

row dbmeth::GetRow(int index)
{
    if(index<=Row.size()){
        return Row[index];
    }else{
        cout<<"no rows having this index"<<endl;
    }
}

void dbmeth::EditRow(int index, int field, int value)
{
    row r;
        r=GetRow(index);
        switch(field){
        case 1:
            r.year=value;
            break;
        case 2:
            r.month=value;
            break;
        case 3:
            r.day=value;
            break;
        case 4:
            r.hour=value;
            break;
        case 5:
            r.minutes=value;
            break;
        case 6:
            r.duration=value;
            break;
        default:
            cout<<"Error of field number\n";
            break;
        }
        r.date=setDate(r);
        Row.replace(index,r);
}

void dbmeth::EditRow(int index, int field, string value)
{
    row r;
        r=GetRow(index);
        switch(field){
        case 7:
            r.name=value;
            break;
        case 8:
            r.place=value;
            break;
        default:
            cout<<"Error of field number\n";
            break;
        }
        Row.replace(index,r);
}

QString dbmeth::ShowNearest(QList<row> Row)
{
    QString qs;
        if(Row.size()!=0){
            bufer=Row;
            sortByDate(bufer,asc);
            czas cz;
            bool b =false;
                for(int i=0;i<Row.size() && !b;i++){
                    if(bufer[i].date<cz.secfrom70){
                        qs=QObject::tr("There are only past events");}
                    else{
                        qs=(formatDate(i,bufer));
                        return qs;
                        b=true;
                        break;
                    }
            }
        }else{
            qs=QObject::tr("No events");
            return qs;
        }
}

QString dbmeth::transferMes()
{
    QString qs="";
       int i=0,ii=0;
       bool b=false;
       for(ite=Row.begin();ite!=Row.end();ite++,ii++){
           b=PastTransfer(ite,ii,do_nothing);
           if(b) i++;
       }
       qs.append(QObject::tr("There are %1 past events. Delete it?").arg(QString::number(i)));
       //qs.append(QString::number(i));
       //qs.append(QObject::tr(" past events. Delete it?"));
       return qs;
}

QString dbmeth::formatDate(int index, QList<row> &Row)
{
    QString qs="";
    if(index<Row.size()){
       qs.append(QString::fromStdString(Row[index].name));
       qs.append(" ");
       if(Row[index].year==0) qs.append("0000");
       else{
           qs.append(QString::number(Row[index].year));
       }
       qs.append(".");
       if(Row[index].month<10) qs.append("0");
       qs.append(QString::number(Row[index].month));
       qs.append(".");
       if(Row[index].day<10) qs.append("0");
       qs.append(QString::number(Row[index].day));
       qs.append(" ");
       if(Row[index].hour<10) qs.append("0");
       qs.append(QString::number(Row[index].hour));
       qs.append(":");
       if(Row[index].minutes<10) qs.append("0");
       qs.append(QString::number(Row[index].minutes));
    }else{
        qs="No rows having this index";
    }
    return qs;
}

int dbmeth::Nakladka(int index)
{
    long mdur;
       int b=0;
       long dur = Row[index].date+Row[index].duration*60;
            for(int i=0; i<Row.size();i++){
               mdur=Row[i].date+Row[i].duration*60;
               if(i==index) continue;
               if(Row[index].date<Row[i].date && dur>Row[i].date) {
                   b++;
               }
               if(Row[index].date<mdur && dur>mdur){
                   b++;
               }
           }
            return b;
}

QString dbmeth::nakladkiMes()
{
    QString qs="";
    QList<row>::iterator it;
    for(int i=0;i<Row.size();i++){
        for(int k=0;k<Row.size();k++){
            if(i==k) continue;
            if(Row[i].date<Row[k].date && Row[i].date+Row[i].duration*60>Row[k].date){
                //qs.append(formatDate(i, Row));
                qs.append(QObject::tr("%1 is crossed with %2")
                          .arg(formatDate(i, Row))
                          .arg(formatDate(k, Row)));
                //qs.append(formatDate(k, Row));
                qs.append("\n");
            }
            if(Row[k].date>Row[i].date && Row[k].date+Row[k].duration*60<Row[i].date+Row[i].duration*60){
                //qs.append(formatDate(k, Row));
                qs.append(QObject::tr("%1 is inside of the %2"))
                        .arg(formatDate(k, Row))
                        .arg(formatDate(i, Row));
                //qs.append(formatDate(i, Row));
                qs.append("\n");
            }
        }
    }
    return qs;
}

int dbmeth::Transfer(operation index)
{
    size_t num_checked_rows=0;
       bool b=false;
       if(index==del){
           for(size_t i=0; i-num_checked_rows< (size_t)Row.length(); i++){
               ite = Row.begin()+i-num_checked_rows;
               b=PastTransfer(ite,i-num_checked_rows,index);
               if(b) num_checked_rows++;
           }
       }else{
        for(size_t i=0; i< (size_t)Row.length(); i++){
            ite = Row.begin()+i;
            b=PastTransfer(ite,i,index);
            if(b) num_checked_rows++;
        }
       }
       return num_checked_rows;
}

bool dbmeth::GetPast(int index)
{
    ite=Row.begin();
    for(int i=0;i<index;ite++, i++);
    return PastTransfer(ite,index,do_nothing);
}

void dbmeth::find(string finded)
{
    filterOff();
    TOUPPER(finded);
    string cp,temp;
    size_t found;
    for(int i=0;i<Row.size();i++){
        temp=Row[i].place;
        TOUPPER(temp);
        cp=temp;
        found = cp.find(finded);
        if(found!=string::npos){
            bufer<<Row[i];
            continue;
        }
        QString num;
        num =formatDate(i, Row);
        string comp = num.toStdString();
        TOUPPER(comp);
        found = comp.find(finded);
        if(found!=string::npos){
            bufer<<Row[i];
            continue;
        }
        num= QString::number(Row[i].duration);
        comp = num.toStdString();
        found = comp.find(finded);
        if(found!=string::npos){
            bufer<<Row[i];
            continue;
        }
    }
    Row.swap(bufer);
    rowSwaped=true;
}

void dbmeth::findToday(int index)
{
    string st;
    QString str;
    czas cz;
    switch (index) {
    case 0:
        counter=0;
        if(cz.year==0){
              str="0000";
        }else str=QString::number(cz.year);
        str.append(".");
        if(cz.month<10) str.append("0");
        str.append(QString::number(cz.month));
        str.append(".");
        if(cz.day<10) str.append("0");
        str.append(QString::number(cz.day));
        st=str.toStdString();
        find(st);
        cz.~czas();
        break;
    case 1:
        counter++;
        cz.day+=counter;
        if(cz.year==0){
              str="0000";
        }else str=QString::number(cz.year);
        str.append(".");
        if(cz.month<10) str.append("0");
        str.append(QString::number(cz.month));
        str.append(".");
        if(cz.day<10) str.append("0");
        str.append(QString::number(cz.day));
        st=str.toStdString();
        find(st);
        cz.~czas();
        break;
    case 2:
        counter--;
        cz.day+=counter;
        if(cz.year==0){
              str="0000";
        }else str=QString::number(cz.year);
        str.append(".");
        if(cz.month<10) str.append("0");
        str.append(QString::number(cz.month));
        str.append(".");
        if(cz.day<10) str.append("0");
        str.append(QString::number(cz.day));
        st=str.toStdString();
        find(st);
        cz.~czas();
        break;
    default:
        break;
    }

}

void dbmeth::filterOff()
{
    if(rowSwaped){
        Row.clear();
        Row.swap(bufer);
        rowSwaped=false;
    };

}

int dbmeth::RowsNum()
{
    return Row.size();
}

QVariant dbmeth::getHeader(int ind)
{
    return QVariant(row::getHeader(ind));
}

int dbmeth::getColumns()
{
    return row::getColumns();
}

void dbmeth::sortByDate(QList<row> &Row, dbmeth::order order)
{
    switch (order) {
    case asc:
        sort(Row.begin(),Row.end(),row::compareDateAsc);
        break;
    case desc:
        sort(Row.begin(),Row.end(),row::compareDateDes);
        break;
    default:
        break;
    }
}

void dbmeth::sortByTime(QList<row> &Row, dbmeth::order order)
{
    switch (order) {
    case asc:
        sort(Row.begin(),Row.end(),row::compareTimeAsc);
        break;
    case desc:
        sort(Row.begin(),Row.end(),row::compareTimeDes);
        break;
    default:
        break;
    }
}

void dbmeth::sortByDuration(QList<row> &Row, dbmeth::order order)
{
    switch (order) {
    case asc:
        sort(Row.begin(),Row.end(),row::compareDurationAsc);
        break;
    case desc:
        sort(Row.begin(),Row.end(),row::compareDurationDes);
        break;
    default:
        break;
    }
}

void dbmeth::sortByName(QList<row> &Row, dbmeth::order order)
{
    switch (order) {
    case asc:
        sort(Row.begin(),Row.end(),row::compareNameAsc);
        break;
    case desc:
        sort(Row.begin(),Row.end(),row::compareNameDes);
        break;
    default:
        break;
    }
}

void dbmeth::sortByPlace(QList<row> &Row, dbmeth::order order)
{
    switch (order) {
    case asc:
        sort(Row.begin(),Row.end(),row::comparePlaceAsc);
        break;
    case desc:
        sort(Row.begin(),Row.end(),row::comparePlaceDes);
        break;
    default:
        break;
    }
}

bool dbmeth::getRowSwaped()
{
    return rowSwaped;
}

bool dbmeth::PastTransfer(QList<row>::iterator ite, int row, operation index)
{
    bool b=false;
        czas cz;
        if(ite->date < cz.secfrom70){
            switch (index) {
            case del:
                DelRow(row);
                b=true;
                break;
            case do_nothing:
                b=true;
                break;
            default:
                break;
            }
        }
        return b;
}

long dbmeth::setDate(row r)
{
    czas cz;
        cz.year=r.year;
        cz.month=r.month;
        cz.day=r.day;
        cz.hour=r.hour;
        cz.min=r.minutes;
        r.date=cz.GetUnixTime(cz);
        return r.date;
}
