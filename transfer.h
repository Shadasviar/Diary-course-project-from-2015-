#ifndef TRANSFER_H
#define TRANSFER_H

#include <QDialog>
#include "dbinterface.h"

namespace Ui {
class Transfer;
}

class Transfer : public QDialog
{
    Q_OBJECT

public:
    explicit Transfer(dbinterface *db,QString num,QWidget *parent = 0);
    ~Transfer();

private slots:
    void on_Leave_button_clicked();
    void on_Del_Button_trans_clicked();

private:
    dbinterface *dbi;
    Ui::Transfer *ui;
};

#endif // TRANSFER_H
