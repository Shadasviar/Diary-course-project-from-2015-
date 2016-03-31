#include "dbio.h"
#include <fstream>
#include <ios>
#include <QList>
#include <QFile>
#include <iostream>

using namespace std;

dbio::dbio()
{
}

void dbio::Write(QList<row> &Row){
    //list<row> lst=Row.toStdList();
    //fstream fs("db.bin",ios_base::binary|ios_base::out);
    QFile dbFile(QString("db.bin"));
    dbFile.open(QFile::WriteOnly);
    QDataStream inFile(&dbFile);
    inFile.setVersion(QDataStream::Qt_5_4);
    inFile<<Row;
    dbFile.flush();
    dbFile.close();
    cout<<"Writing success\n";
}

void dbio::Read(QList<row> &lst){
        //ifstream in("db.bin",ios_base::in|ios_base::binary);
        QFile dbFile(QString("db.bin"));
        dbFile.open(QFile::ReadOnly);
        if(dbFile.isOpen()){
          //boost::archive::binary_iarchive ia(in);
            QDataStream outFile(&dbFile);
            outFile.setVersion(QDataStream::Qt_5_4);
            outFile >> lst;
            //ia>>lst;
            //in.close();
            dbFile.close();
            cout<<"Reading success\n";
        }
        else{
            cout<<"Couldn't open file\n";
        }
}

