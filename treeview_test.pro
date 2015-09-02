#-------------------------------------------------
#
# Project created by QtCreator 2015-08-31T23:36:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = treeview_test
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mymodel.cpp \
    treeitem.cpp \
    treemodel.cpp \
    delegate.cpp

HEADERS  += widget.h \
    mymodel.h \
    treeitem.h \
    treemodel.h \
    delegate.h

FORMS    += widget.ui

DISTFILES +=

RESOURCES += \
    test.qrc
