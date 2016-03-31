#-------------------------------------------------
#
# Project created by QtCreator 2015-03-30T21:35:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Diary
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        diary.cpp \
    row.cpp \
    dbmeth.cpp \
    czas.cpp \
    dbinterface.cpp \
    dbio.cpp \
    info.cpp \
    transfer.cpp \
    nakladki.cpp \
    settings.cpp

HEADERS  += diary.h \
    row.h \
    dbmeth.h \
    czas.h \
    dbinterface.h \
    dbio.h \
    info.h \
    transfer.h \
    nakladki.h \
    settings.h

FORMS    += diary.ui \
    info.ui \
    transfer.ui \
    nakladki.ui \
    settings.ui

RESOURCES += \
    resourse.qrc

TRANSLATIONS+=by.ts
