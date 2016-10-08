#-------------------------------------------------
#
# Project created by QtCreator 2015-03-30T21:35:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Diary
TEMPLATE = app
CONFIG += c++14


SOURCES += Src/czas.cpp \
    Src/dbinterface.cpp \
    Src/dbio.cpp \
    Src/dbmeth.cpp \
    Src/diary.cpp \
    Src/info.cpp \
    Src/main.cpp \
    Src/nakladki.cpp \
    Src/row.cpp \
    Src/settings.cpp \
    Src/transfer.cpp \
    Src/settings_manager.cpp

HEADERS  += Src/diary.h \
    Src/row.h \
    Src/dbmeth.h \
    Src/czas.h \
    Src/dbinterface.h \
    Src/dbio.h \
    Src/info.h \
    Src/transfer.h \
    Src/nakladki.h \
    Src/settings.h \
    Src/settings_manager.h

FORMS    += UI_src/diary.ui \
    UI_src/info.ui \
    UI_src/transfer.ui \
    UI_src/nakladki.ui \
    UI_src/settings.ui \

RESOURCES += \
    Resources/resourse.qrc

TRANSLATIONS+= Translations/by.ts

DISTFILES += \
    diag/diag.docbook \
    Build Diary/db.bin \
    db.bin \
    Build Diary/Diary \
    Build Diary/by.qm \
    Translations/by.qm \
    add_license \
    Diary_PL_win.anjuta \
    diag/class diagram.png \
    Resources/48px-Crystal_Clear_action_apply.png \
    Resources/AlertIcon.png \
    Resources/Button-Info-icon.png \
    Resources/inf.png \
    Resources/info.png \
    Resources/pitr_green_arrows_set_4.png \
    Resources/Start-Menu-Search-icon.png \
    Resources/strelka4.png \
    Resources/скрин.png \
    lic \
    LICENSE \
    Translations/by.ts \
    diag.xmi
