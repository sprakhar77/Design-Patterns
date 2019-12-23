TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ConcreteCollegue.cpp \
    ConcreteMediator.cpp \
        main.cpp

HEADERS += \
    ConcreteCollegue.h \
    ConcreteMediator.h \
    IMediator.h \
    ICollegue.h
