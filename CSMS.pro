#-------------------------------------------------
#
# Project created by QtCreator 2016-10-09T13:46:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CSMS
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    account.cpp \
    house.cpp \
    dialogaddaccount.cpp

HEADERS  += mainwindow.h \
    account.h \
    house.h \
    dialogaddaccount.h

FORMS    += mainwindow.ui \
    dialogaddaccount.ui
