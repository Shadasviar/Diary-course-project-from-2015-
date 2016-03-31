/********************************************************************************
** Form generated from reading UI file 'nakladki.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAKLADKI_H
#define UI_NAKLADKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Nakladki
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *nakladka_text;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK_button;

    void setupUi(QDialog *Nakladki)
    {
        if (Nakladki->objectName().isEmpty())
            Nakladki->setObjectName(QStringLiteral("Nakladki"));
        Nakladki->resize(560, 300);
        verticalLayout = new QVBoxLayout(Nakladki);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(Nakladki);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nakladka_text = new QTextBrowser(frame);
        nakladka_text->setObjectName(QStringLiteral("nakladka_text"));
        nakladka_text->setEnabled(true);

        verticalLayout_2->addWidget(nakladka_text);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(Nakladki);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OK_button = new QPushButton(frame_2);
        OK_button->setObjectName(QStringLiteral("OK_button"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/48px-Crystal_Clear_action_apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        OK_button->setIcon(icon);

        horizontalLayout->addWidget(OK_button);


        verticalLayout->addWidget(frame_2);


        retranslateUi(Nakladki);

        QMetaObject::connectSlotsByName(Nakladki);
    } // setupUi

    void retranslateUi(QDialog *Nakladki)
    {
        Nakladki->setWindowTitle(QApplication::translate("Nakladki", "Dialog", 0));
        OK_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nakladki: public Ui_Nakladki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAKLADKI_H
