QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    entradaframe.cpp \
    hoja.cpp \
    main.cpp \
    mainwindow.cpp \
    planta.cpp \
    rama.cpp

HEADERS += \
    entradaframe.h \
    hoja.h \
    mainprocess.h \
    mainwindow.h \
    planta.h \
    rama.h

FORMS += \
    entradaframe.ui \
    mainwindow.ui
LIBS += \
    -pthread -lrt

TRANSLATIONS += \
    PaginaPrincipal_es_GT.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
