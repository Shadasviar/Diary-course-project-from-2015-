#ifndef DBIO_H
#define DBIO_H
#include "row.h"

class dbio
{
public:
    dbio();
    void Write(QList<row> &Row);
    void Read(QList<row> &lst);

private:

};

#endif // DBIO_H
