#-------------------------------------------------
#
# Project created by QtCreator 2018-07-24T10:01:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rrt-test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    renderarea.cpp \
    rrt.cpp \
    obstacles.cpp

HEADERS  += mainwindow.h \
    renderarea.h \
    rrt.h \
    obstacles.h \
    constants.h

FORMS    += mainwindow.ui
