#include "dbinterface.h"
#include "transfer.h"
#include "dbmeth.h"
#include <QDate>
#include <QTime>
#include <QDebug>
#include <QBrush>

dbinterface::dbinterface()
{
    this->dbm=new dbmeth;
    if(dbm->Transfer(dbm->do_nothing)){//!
        Transfer *tr = new Transfer(this,dbm->transferMes());
        tr->exec();
    }
}

int dbinterface::columnCount(const QModelIndex &parent) const
{
    return dbm->getColumns();
}

int dbinterface::rowCount(const QModelIndex &parent) const
{
    return dbm->RowsNum();
}

void dbinterface::find(QString finded)
{
    string fnd = finded.toStdString();
    dbm->find(fnd);
    dataChanged(QModelIndex(),QModelIndex());
}

void dbinterface::findToday(int index)
{
    dbm->findToday(index);
    dataChanged(QModelIndex(),QModelIndex());
}

QVariant dbinterface::data(const QModelIndex &index, int role) const
{
    switch (role) {
    case Qt::BackgroundRole:{
        int nak=dbm->Nakladka(index.row());
        if(dbm->GetPast(index.row())){
              return QBrush(QColor(255,0,0,80));
        }
        if(nak>0){
                    return QBrush(Qt::yellow);
                }
        else
              {return QBrush(Qt::white);}
        break;}
    case Qt::CheckStateRole:
        return QVariant();
        break;
    case Qt::TextAlignmentRole:
        return Qt::AlignCenter;
        break;
    default:
             return dbm->GetRow(index.row()).getItem(index.column());
        break;
    }
}

QVariant dbinterface::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role != Qt::DisplayRole)
              return QVariant();

    if(orientation == Qt::Horizontal && role == Qt::DisplayRole){
        return dbm->getHeader(section);
    }else{
        return QString("%1").arg( section + 1 );
    }
    Qt::CheckStateRole;
}

bool dbinterface::setData(const QModelIndex &index, const QVariant &value, int role)
{
    QDate qd;
    QTime qt;
    QString qs;
     if (index.isValid() && role == Qt::EditRole){
         if(index.column()==0){
             qd= QDate::fromString(value.toString(),"yyyy.M.dd");
             dbm->EditRow(index.row(),1,qd.year());
             dbm->EditRow(index.row(),2,qd.month());
             dbm->EditRow(index.row(),3,qd.day());
         }
         if(index.column()==1){
             qt= QTime::fromString(value.toString(),"hh:mm");
             dbm->EditRow(index.row(),4,qt.hour());
             dbm->EditRow(index.row(),5,qt.minute());
         }
         if(index.column()==2){
             dbm->EditRow(index.row(),6,value.toInt());
         }
         if(index.column()==3){
             qs=value.toString();
             dbm->EditRow(index.row(),7,qs.toStdString());
         }
         if(index.column()==4){
             qs=value.toString();
             dbm->EditRow(index.row(),8,qs.toStdString());
         }
     }
     dbm->Write(dbm->Row);
}

Qt::ItemFlags dbinterface::flags(const QModelIndex &index) const
{
    if(!index.isValid())
        return Qt::ItemIsEnabled;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

QString dbinterface::nearest()
{
    QString qs = dbm->ShowNearest(dbm->Row);
    return qs;
}

bool dbinterface::insertRows(int row1, int count, const QModelIndex &parent)
{
    row r;
    beginInsertRows(parent, this->rowCount(parent), this->rowCount(parent));
    dbm->Add(r);
    endInsertRows();
    return true;
}

bool dbinterface::removeRows(int row, int count, const QModelIndex &parent)
{
    beginRemoveRows(parent, row,row);
    dbm->DelRow(row);
    endRemoveRows();
    return true;
}

void dbinterface::AddRow()
{
    dbm->filterOff();
    this->insertRows(rowCount(QModelIndex()), 1, QModelIndex());
}

QString dbinterface::DelRow(int index)
{
    if(!dbm->getRowSwaped()){
        this->removeRows(index,1,QModelIndex());
        return tr("Deleted");
    }else return tr("Unable to edit database in the filter mode");
}

QString dbinterface::Save()
{
    dbm->filterOff();
    dbm->Write(dbm->Row);
    return tr("Saved");
    dataChanged(QModelIndex(),QModelIndex());
}

QString dbinterface::filterOff()
{
    dbm->filterOff();
    dataChanged(QModelIndex(),QModelIndex());
    return tr("Database is accassible for editing");
}

QString dbinterface::nakladki()
{
    return dbm->nakladkiMes();
}

void dbinterface::delPast()
{
    dbm->Transfer(dbm->del);
}

void dbinterface::sortByColumn(int column, Qt::SortOrder order)
{
    switch (column) {
    case 0:{
        if(order==Qt::AscendingOrder)
            dbm->sortByDate(dbm->Row, dbm->asc);
        if(order==Qt::DescendingOrder)
            dbm->sortByDate(dbm->Row,dbm->desc);
        break;
    }
    case 1:{
        if(order==Qt::AscendingOrder)
            dbm->sortByTime(dbm->Row,dbm->asc);
        if(order==Qt::DescendingOrder)
            dbm->sortByTime(dbm->Row,dbm->desc);
        break;
    }
    case 2:{
        if(order==Qt::AscendingOrder)
            dbm->sortByDuration(dbm->Row,dbm->asc);
        if(order==Qt::DescendingOrder)
            dbm->sortByDuration(dbm->Row,dbm->desc);
        break;
    }
    case 3:
        if(order==Qt::AscendingOrder)
            dbm->sortByName(dbm->Row,dbm->asc);
        if(order==Qt::DescendingOrder)
            dbm->sortByName(dbm->Row,dbm->desc);
        break;
    case 4:
        if(order==Qt::AscendingOrder)
            dbm->sortByPlace(dbm->Row,dbm->asc);
        if(order==Qt::DescendingOrder)
            dbm->sortByPlace(dbm->Row,dbm->desc);
        break;
    default:
        break;
    }
    dataChanged(QModelIndex(),QModelIndex());
}

