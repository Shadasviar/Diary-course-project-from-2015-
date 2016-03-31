#ifndef DBINTERFACE_H
#define DBINTERFACE_H
#include <QAbstractTableModel>
#include <QObject>
#include "dbmeth.h"

class dbinterface: public QAbstractTableModel
{
    Q_OBJECT

public:
    /*
     * Theese functions returns notifications
     * about their success/unsuccess exit status
     * for application notification line
     * */
    dbinterface();
    QString nearest();
    void AddRow();
    QString DelRow(int index);
    QString Save();
    QString filterOff();
    QString nakladki();
    void delPast();

    void find(QString finded);
    void findToday(int index);

protected:
    bool insertRows(int row, int count, const QModelIndex &parent);
    bool removeRows(int row, int count, const QModelIndex &parent);
    bool setData(const QModelIndex &index, const QVariant &value, int role);

    Qt::ItemFlags flags(const QModelIndex &index) const;

    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const ;

    int columnCount(const QModelIndex &parent) const;
    int rowCount(const QModelIndex &parent) const;

    dbmeth *dbm;

private slots:
    void sortByColumn(int column, Qt::SortOrder order);
};

#endif // DBINTERFACE_H
