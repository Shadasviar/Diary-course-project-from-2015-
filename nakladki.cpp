#include "nakladki.h"
#include "ui_nakladki.h"

Nakladki::Nakladki(QString num, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nakladki)
{
    ui->setupUi(this);
    ui->nakladka_text->setText(num);
}

Nakladki::~Nakladki()
{
    delete ui;
}

void Nakladki::on_OK_button_clicked()
{
    close();
}
