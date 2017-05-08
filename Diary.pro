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
INCLUDEPATH += Src/headers


SOURCES += Src/cpp/czas.cpp \
    Src/cpp/dbinterface.cpp \
    Src/cpp/dbio.cpp \
    Src/cpp/dbmeth.cpp \
    Src/cpp/diary.cpp \
    Src/cpp/info.cpp \
    Src/cpp/main.cpp \
    Src/cpp/nakladki.cpp \
    Src/cpp/row.cpp \
    Src/cpp/settings.cpp \
    Src/cpp/transfer.cpp \
    Src/cpp/settings_manager.cpp

HEADERS  += Src/headers/diary.h \
    Src/headers/row.h \
    Src/headers/dbmeth.h \
    Src/headers/czas.h \
    Src/headers/dbinterface.h \
    Src/headers/dbio.h \
    Src/headers/info.h \
    Src/headers/transfer.h \
    Src/headers/nakladki.h \
    Src/headers/settings.h \
    Src/headers/settings_manager.h

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
