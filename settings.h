#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWizardPage>
#include "diary.h"

namespace Ui {
class Settings;
}

class Settings : public QWizardPage
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent, Diary *diary_in);
    ~Settings();
    QFont font_for_widget;

private slots:
    void on_Apply_settings_button_clicked();

private:
    Ui::Settings *ui;
    Diary *diary;
};

#endif // SETTINGS_H
