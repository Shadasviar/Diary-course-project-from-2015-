#ifndef DIARY_H
#define DIARY_H

#include <QWidget>
#include "dbinterface.h"

namespace Ui {
class Diary;
}

class Diary : public QWidget
{
    Q_OBJECT

public:
    explicit Diary(QWidget *parent = 0);
    dbinterface dbi;
    void changeFontSize(QFont font);
    ~Diary();

private slots:

    void on_ExitButton_clicked();
    void on_DelRowButton_clicked();
    void on_AddRowButton_clicked();
    void on_SaveButton_clicked();
    void on_Info_Button_clicked();
    void on_find_button_clicked();
    void on_today_button_clicked();
    void on_last_day_button_clicked();
    void on_next_day_button_clicked();
    void on_return_button_clicked();
    void on_nakladki_button_clicked();

    void on_Settings_button_clicked();

signals:
    void sortIndicatorChanged ( int logicalIndex, Qt::SortOrder order );

private:
    Ui::Diary *ui;
};

#endif // DIARY_H
