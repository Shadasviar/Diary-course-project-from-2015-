#ifndef DBMETH_H
#define DBMETH_H
#include "row.h"
#include <string>
#include "czas.h"
#include "dbio.h"
#include <QVariant>
#include <QList>

class dbmeth : public dbio
{
public:
    enum operation {do_nothing, del};
    enum order{asc, desc};
    dbmeth();
    void Add(row r);
    void DelRow(int index);
    row GetRow(int index);

    QString ShowNearest(QList<row> Row);
    QString transferMes();
    QString formatDate(int index, QList<row> &Row);
    int Nakladka(int index);
    QString nakladkiMes();
    int Transfer(operation index);
    bool GetPast(int index);
    void find(string finded);
    void findToday(int index);
    void filterOff();

    int RowsNum(); 
    QVariant getHeader(int ind);
    int getColumns();
    bool getRowSwaped();

    void sortByDate(QList<row> &Row, order order);
    void sortByTime(QList<row> &Row, order order);
    void sortByDuration(QList<row> &Row, order order);
    void sortByName(QList<row> &Row, order order);
    void sortByPlace(QList<row> &Row, order order);

    void sortByColumn(QList<row> &Row, order order, int i_column);


    QList<row> Row;
    QList<row>::iterator ite;


private:   
    int counter;
    bool rowSwaped;
    QList<row> bufer;
    bool PastTransfer(QList<row>::iterator ite, int row, operation index);
    long setDate(row r);


/*Template functions section
*
*
*--------------------------------------------------------------------------------------------------------
* */

public:

    template <typename T>
    void EditRow(int index, int field, T value)
    {
        row r;
        r=GetRow(index);
        *(T*)r.fields[field] = value;
        //r.date=setDate(r);
        r.SetTimeBySecFrom70();
        Row.replace(index,r);
    }


    template <typename T>
    void sort_by_column(QList<row> &Row, dbmeth::order order, int i_column)
    {
        switch(order){
        case asc:
            sort(Row.begin(),Row.end(),[i_column](row r1, row r2){
                return *(T*)r1.fields[i_column] < *(T*)r2.fields[i_column];
            });
            break;
        case desc:
            sort(Row.begin(),Row.end(),[i_column](row r1, row r2){
                return *(T*)r1.fields[i_column] > *(T*)r2.fields[i_column];
            });
            break;
        default:
            break;
        }
    }

};

#endif // DBMETH_H
