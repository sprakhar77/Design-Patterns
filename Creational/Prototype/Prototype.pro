TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcretePrototypeA.cpp \
        ConcretePrototypeB.cpp \
        ConcretePrototypeFactory.cpp \
        main.cpp

HEADERS += \
    ConcretePrototypeA.h \
    ConcretePrototypeB.h \
    ConcretePrototypeFactory.h \
    IPrototype.h \ \
    IPrototypeFactory.h
