#-------------------------------------------------
#
# Project created by QtCreator 2018-05-23T12:35:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 01_TicTacToe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    game.cpp

HEADERS  += mainwindow.h \
    player.h \
    game.h

FORMS    += mainwindow.ui
