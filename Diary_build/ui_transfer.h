/********************************************************************************
** Form generated from reading UI file 'transfer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_H
#define UI_TRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Transfer
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QLabel *Num_of_trans;
    QLabel *Warning;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Del_Button_trans;
    QPushButton *Leave_button;

    void setupUi(QDialog *Transfer)
    {
        if (Transfer->objectName().isEmpty())
            Transfer->setObjectName(QStringLiteral("Transfer"));
        Transfer->resize(472, 116);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Transfer->sizePolicy().hasHeightForWidth());
        Transfer->setSizePolicy(sizePolicy);
        Transfer->setMaximumSize(QSize(472, 116));
        gridLayout_2 = new QGridLayout(Transfer);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(Transfer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Num_of_trans = new QLabel(frame_3);
        Num_of_trans->setObjectName(QStringLiteral("Num_of_trans"));

        gridLayout->addWidget(Num_of_trans, 0, 1, 1, 1);

        Warning = new QLabel(frame_3);
        Warning->setObjectName(QStringLiteral("Warning"));

        gridLayout->addWidget(Warning, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Del_Button_trans = new QPushButton(frame_2);
        Del_Button_trans->setObjectName(QStringLiteral("Del_Button_trans"));

        horizontalLayout_2->addWidget(Del_Button_trans);

        Leave_button = new QPushButton(frame_2);
        Leave_button->setObjectName(QStringLiteral("Leave_button"));

        horizontalLayout_2->addWidget(Leave_button);


        verticalLayout->addWidget(frame_2);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Transfer);

        QMetaObject::connectSlotsByName(Transfer);
    } // setupUi

    void retranslateUi(QDialog *Transfer)
    {
        Transfer->setWindowTitle(QApplication::translate("Transfer", "Dialog", 0));
        Num_of_trans->setText(QApplication::translate("Transfer", "TextLabel", 0));
        Warning->setText(QApplication::translate("Transfer", "TextLabel", 0));
        Del_Button_trans->setText(QApplication::translate("Transfer", "Usun\304\205\304\207", 0));
        Leave_button->setText(QApplication::translate("Transfer", "P\303\263\305\274niej", 0));
    } // retranslateUi

};

namespace Ui {
    class Transfer: public Ui_Transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
