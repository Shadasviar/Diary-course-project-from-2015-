/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLineEdit *Font_size_field;
    QLabel *label;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Apply_settings_button;
    QPushButton *Cancel_settings_button;
    QPushButton *Save_settings_button;

    void setupUi(QWizardPage *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 300);
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame_2 = new QFrame(Settings);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Font_size_field = new QLineEdit(frame_2);
        Font_size_field->setObjectName(QStringLiteral("Font_size_field"));

        gridLayout_3->addWidget(Font_size_field, 0, 1, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);

        frame = new QFrame(Settings);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        Apply_settings_button = new QPushButton(frame);
        Apply_settings_button->setObjectName(QStringLiteral("Apply_settings_button"));

        gridLayout_2->addWidget(Apply_settings_button, 0, 2, 1, 1);

        Cancel_settings_button = new QPushButton(frame);
        Cancel_settings_button->setObjectName(QStringLiteral("Cancel_settings_button"));

        gridLayout_2->addWidget(Cancel_settings_button, 0, 3, 1, 1);

        Save_settings_button = new QPushButton(frame);
        Save_settings_button->setObjectName(QStringLiteral("Save_settings_button"));

        gridLayout_2->addWidget(Save_settings_button, 0, 1, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWizardPage *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "WizardPage", 0));
        label->setText(QApplication::translate("Settings", "Font size", 0));
        Apply_settings_button->setText(QApplication::translate("Settings", "Apply", 0));
        Cancel_settings_button->setText(QApplication::translate("Settings", "Cancel", 0));
        Save_settings_button->setText(QApplication::translate("Settings", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
