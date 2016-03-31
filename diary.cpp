#include "diary.h"
#include "ui_diary.h"
#include "dbmeth.h"
#include "dbinterface.h"
#include "info.h"
#include <QDebug>
#include "nakladki.h"
#include "settings.h"

Diary::Diary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diary)
{
    ui->setupUi(this);
    ui->tableView->setModel(&dbi);
    ui->Label_name->setText(dbi.nearest());
    QObject::connect(ui->tableView->horizontalHeader(),SIGNAL(sortIndicatorChanged(int,Qt::SortOrder)),&dbi,SLOT(sortByColumn(int,Qt::SortOrder)));
}

void Diary::changeFontSize(QFont font)
{
    this->setFont(font);
    QHeaderView *verticalHeader = ui->tableView->verticalHeader();
    verticalHeader->sectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(font.pixelSize()+5);
}

Diary::~Diary()
{
    delete ui;
}

void Diary::on_ExitButton_clicked()
{
    exit(0);
}

void Diary::on_DelRowButton_clicked()
{
    QModelIndexList sel = ui->tableView->selectionModel()->selectedRows();
    int i=0;
    foreach (QModelIndex index, sel) {
        ui->system_line->setText(dbi.DelRow(index.row()-i));
        ui->Label_name->setText(dbi.nearest());
        i++;
    }
}

void Diary::on_AddRowButton_clicked()
{
    dbi.AddRow();
}

void Diary::on_SaveButton_clicked()
{
    ui->system_line->setText(dbi.Save());
    ui->Label_name->setText(dbi.nearest());
}

void Diary::on_Info_Button_clicked()
{
    info *inf = new info;
    inf->show();
}

void Diary::on_find_button_clicked()
{
    QString src = ui->search_line->text();
    dbi.find(src);
}

void Diary::on_today_button_clicked()
{
    dbi.findToday(0);
}

void Diary::on_last_day_button_clicked()
{
    dbi.findToday(2);
}

void Diary::on_next_day_button_clicked()
{
    dbi.findToday(1);
}

void Diary::on_return_button_clicked()
{
    ui->system_line->setText(dbi.filterOff());
}

void Diary::on_nakladki_button_clicked()
{
    Nakladki *na = new Nakladki(dbi.nakladki());
    na->show();
}

void Diary::on_Settings_button_clicked()
{
    Settings *settings = new Settings(0,this);
    settings->show();
}
