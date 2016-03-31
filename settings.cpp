#include "settings.h"
#include "ui_settings.h"
#include "diary.h"

Settings::Settings(QWidget *parent, Diary *diary_in) :
    QWizardPage(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    ui->Font_size_field->setValidator(new QIntValidator(5,100,this));
    diary = diary_in;
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_Apply_settings_button_clicked()
{
    QString tmp = ui->Font_size_field->text();
    int font_size = tmp.toInt();
    font_for_widget.setPixelSize(font_size);
    diary->changeFontSize(font_for_widget);
    this->setFont(font_for_widget);
}
