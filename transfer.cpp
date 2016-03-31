#include "transfer.h"
#include "ui_transfer.h"
#include "dbmeth.h"
#include <QObject>

Transfer::Transfer(dbinterface *db, QString num, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transfer)
{
    ui->setupUi(this);
    ui->Num_of_trans->setText(num);
    QPixmap pixmap(":/images/AlertIcon.png");
    ui->Warning->setPixmap(pixmap);
    dbi=db;
}

Transfer::~Transfer()
{
    delete ui;
}

void Transfer::on_Leave_button_clicked()
{
    close();
}

void Transfer::on_Del_Button_trans_clicked()
{
    this->dbi->delPast();
    close();
}
