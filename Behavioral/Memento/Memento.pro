TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteOrignator.cpp \
    ConcreteMemento.cpp \
    ConcreteCareTaker.cpp

HEADERS += \
    IOrignator.h \
    IMemento.h \
    ConcreteOrignator.h \
    ConcreteMemento.h \
    ConcreteCareTaker.h \
    ICareTaker.h
