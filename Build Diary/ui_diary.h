/********************************************************************************
** Form generated from reading UI file 'diary.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIARY_H
#define UI_DIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Diary
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *search_line;
    QPushButton *find_button;
    QSpacerItem *verticalSpacer;
    QPushButton *AddRowButton;
    QPushButton *DelRowButton;
    QFrame *frame_5;
    QGridLayout *gridLayout_2;
    QPushButton *last_day_button;
    QPushButton *return_button;
    QPushButton *next_day_button;
    QPushButton *nakladki_button;
    QPushButton *today_button;
    QPushButton *Settings_button;
    QPushButton *Info_Button;
    QTableView *tableView;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *Label_name;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *system_line;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SaveButton;
    QPushButton *ExitButton;

    void setupUi(QWidget *Diary)
    {
        if (Diary->objectName().isEmpty())
            Diary->setObjectName(QStringLiteral("Diary"));
        Diary->resize(819, 512);
        verticalLayout_2 = new QVBoxLayout(Diary);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_2 = new QFrame(Diary);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(0);
        frame_3->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 4, 0);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        search_line = new QLineEdit(frame_4);
        search_line->setObjectName(QStringLiteral("search_line"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(search_line->sizePolicy().hasHeightForWidth());
        search_line->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(search_line);

        find_button = new QPushButton(frame_4);
        find_button->setObjectName(QStringLiteral("find_button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Start-Menu-Search-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        find_button->setIcon(icon);

        verticalLayout_3->addWidget(find_button, 0, Qt::AlignRight);


        verticalLayout->addWidget(frame_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        AddRowButton = new QPushButton(frame_3);
        AddRowButton->setObjectName(QStringLiteral("AddRowButton"));

        verticalLayout->addWidget(AddRowButton);

        DelRowButton = new QPushButton(frame_3);
        DelRowButton->setObjectName(QStringLiteral("DelRowButton"));

        verticalLayout->addWidget(DelRowButton);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        last_day_button = new QPushButton(frame_5);
        last_day_button->setObjectName(QStringLiteral("last_day_button"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/pitr_green_arrows_set_4.png"), QSize(), QIcon::Normal, QIcon::Off);
        last_day_button->setIcon(icon1);

        gridLayout_2->addWidget(last_day_button, 4, 1, 1, 1);

        return_button = new QPushButton(frame_5);
        return_button->setObjectName(QStringLiteral("return_button"));

        gridLayout_2->addWidget(return_button, 2, 1, 1, 2);

        next_day_button = new QPushButton(frame_5);
        next_day_button->setObjectName(QStringLiteral("next_day_button"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/strelka4.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_day_button->setIcon(icon2);

        gridLayout_2->addWidget(next_day_button, 4, 2, 1, 1);

        nakladki_button = new QPushButton(frame_5);
        nakladki_button->setObjectName(QStringLiteral("nakladki_button"));

        gridLayout_2->addWidget(nakladki_button, 0, 1, 1, 2);

        today_button = new QPushButton(frame_5);
        today_button->setObjectName(QStringLiteral("today_button"));

        gridLayout_2->addWidget(today_button, 3, 1, 1, 2);


        verticalLayout->addWidget(frame_5);

        Settings_button = new QPushButton(frame_3);
        Settings_button->setObjectName(QStringLiteral("Settings_button"));

        verticalLayout->addWidget(Settings_button);

        Info_Button = new QPushButton(frame_3);
        Info_Button->setObjectName(QStringLiteral("Info_Button"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        Info_Button->setIcon(icon3);

        verticalLayout->addWidget(Info_Button);


        gridLayout->addWidget(frame_3, 1, 1, 2, 1);

        tableView = new QTableView(frame_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setSortingEnabled(true);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label = new QLabel(frame_6);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        Label_name = new QLabel(frame_6);
        Label_name->setObjectName(QStringLiteral("Label_name"));

        horizontalLayout_2->addWidget(Label_name);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addWidget(frame_6, 2, 0, 1, 1);


        verticalLayout_2->addWidget(frame_2);

        frame = new QFrame(Diary);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        system_line = new QLabel(frame);
        system_line->setObjectName(QStringLiteral("system_line"));

        horizontalLayout->addWidget(system_line);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        SaveButton = new QPushButton(frame);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));

        horizontalLayout->addWidget(SaveButton);

        ExitButton = new QPushButton(frame);
        ExitButton->setObjectName(QStringLiteral("ExitButton"));

        horizontalLayout->addWidget(ExitButton);


        verticalLayout_2->addWidget(frame);


        retranslateUi(Diary);

        QMetaObject::connectSlotsByName(Diary);
    } // setupUi

    void retranslateUi(QWidget *Diary)
    {
        Diary->setWindowTitle(QApplication::translate("Diary", "Diary", 0));
#ifndef QT_NO_TOOLTIP
        find_button->setToolTip(QApplication::translate("Diary", "<html><head/><body><p>Znale\305\274\304\207</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        find_button->setText(QString());
        AddRowButton->setText(QApplication::translate("Diary", "Add row", 0));
        DelRowButton->setText(QApplication::translate("Diary", "Delete row", 0));
#ifndef QT_NO_TOOLTIP
        last_day_button->setToolTip(QApplication::translate("Diary", "<html><head/><body><p>Past day</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        last_day_button->setWhatsThis(QApplication::translate("Diary", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        last_day_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        return_button->setToolTip(QApplication::translate("Diary", "<html><head/><body><p>Turn off finding mode of database and go to edit mode</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        return_button->setText(QApplication::translate("Diary", "Return to database", 0));
#ifndef QT_NO_TOOLTIP
        next_day_button->setToolTip(QApplication::translate("Diary", "<html><head/><body><p>Next day</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        next_day_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        nakladki_button->setToolTip(QApplication::translate("Diary", "<html><head/><body><p>Show list of linings</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        nakladki_button->setText(QApplication::translate("Diary", "Linings", 0));
#ifndef QT_NO_TOOLTIP
        today_button->setToolTip(QApplication::translate("Diary", "<html><head/><body><p>Show today events</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        today_button->setText(QApplication::translate("Diary", "Today", 0));
        Settings_button->setText(QApplication::translate("Diary", "Settings", 0));
        Info_Button->setText(QApplication::translate("Diary", "Info", 0));
        label->setText(QApplication::translate("Diary", "The most close event", 0));
        Label_name->setText(QApplication::translate("Diary", "TextLabel", 0));
        label_2->setText(QApplication::translate("Diary", "System notifications", 0));
        system_line->setText(QString());
        SaveButton->setText(QApplication::translate("Diary", "Save", 0));
        ExitButton->setText(QApplication::translate("Diary", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Diary: public Ui_Diary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIARY_H
