#ifndef NAKLADKI_H
#define NAKLADKI_H

#include <QDialog>

namespace Ui {
class Nakladki;
}

class Nakladki : public QDialog
{
    Q_OBJECT

public:
    explicit Nakladki(QString num,QWidget *parent = 0);
    ~Nakladki();

private slots:
    void on_OK_button_clicked();

private:
    Ui::Nakladki *ui;
};

#endif // NAKLADKI_H
