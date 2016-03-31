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
            *(T*)r.fields[field-1] = value;
            r.date=setDate(r);
            Row.replace(index,r);
    }

};

#endif // DBMETH_H
