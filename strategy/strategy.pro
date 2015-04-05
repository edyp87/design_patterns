#-------------------------------------------------
#
# Project created by QtCreator 2015-04-05T23:44:17
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = strategy
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    recursivefibonaccistrategy.cpp \
    dynamicfibonaccistrategy.cpp \
    matrixfibonaccistrategy.cpp

HEADERS += \
    istrategy.h \
    recursivefibonaccistrategy.h \
    dynamicfibonaccistrategy.h \
    matrixfibonaccistrategy.h
