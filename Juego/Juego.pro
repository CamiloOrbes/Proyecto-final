#-------------------------------------------------
#
# Project created by QtCreator 2017-11-30T17:43:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Juego
TEMPLATE = app


SOURCES += main.cpp\
        qtguiapplication.cpp \
    apuntador.cpp \
    arbitros.cpp \
    avatar.cpp \
    balon.cpp \
    bolas.cpp \
    bolasgraf.cpp \
    canon.cpp \
    cuadrados.cpp \
    dialogo.cpp \
    instrucciones.cpp \
    menu.cpp \
    obstaculo.cpp \
    restriccion.cpp \
    numjugs.cpp

HEADERS  += qtguiapplication.h \
    apuntador.h \
    arbitros.h \
    avatar.h \
    balon.h \
    bolas.h \
    bolasgraf.h \
    canon.h \
    cuadrados.h \
    dialogo.h \
    instrucciones.h \
    menu.h \
    obstaculo.h \
    restriccion.h \
    numjugs.h

FORMS    += qtguiapplication.ui \
    DialogButtonRight.ui \
    dialogo.ui \
    instrucciones.ui \
    menu.ui \
    menuprincipal.ui \
    restriccion.ui \
    numjugs.ui

RESOURCES += \
    resource.qrc
