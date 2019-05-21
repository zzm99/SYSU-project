#-------------------------------------------------
#
# Project created by QtCreator 2019-04-16T11:14:44
#
#-------------------------------------------------

QT       += core gui
QT       += core sql
QT +=  axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xiangmu
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        zhuye.cpp \
        chaxun.cpp \
        jilupian.cpp \
        xiaoqu.cpp \
        xinwen.cpp \
        zhengce.cpp \
        zhuanye.cpp \
    dialog.cpp \
    photo.cpp

HEADERS += \
        zhuye.h \
        chaxun.h \
        jilupian.h \
        xiaoqu.h \
        xinwen.h \
        zhengce.h \
        zhuanye.h \
    dialog.h \
    photo.h

FORMS += \
        zhuye.ui \
        chaxun.ui \
        jilupian.ui \
        xiaoqu.ui \
        xinwen.ui \
        zhengce.ui \
        zhuanye.ui \
    dialog.ui \
    photo.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    sourse.qrc

RC_ICONS = xiaohui.ico
