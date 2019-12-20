TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteFactory.cpp \
        ConcreteProductA.cpp \
        ConcreteProductB.cpp \
        main.cpp

HEADERS += \
    ConcreteFactory.h \
    ConcreteProductA.h \
    ConcreteProductB.h \
    IFactory.h \
    IProduct.h
