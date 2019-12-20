TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Creational/Factory/ConcreteFactory.cpp \
        Creational/Factory/ConcreteProductA.cpp \
        Creational/Factory/ConcreteProductB.cpp \
        Creational/Factory/Driver.cpp \
        main.cpp

HEADERS += \
    Creational/Factory/ConcreteFactory.h \
    Creational/Factory/ConcreteProductA.h \
    Creational/Factory/ConcreteProductB.h \
    Creational/Factory/Driver.h \
    Creational/Factory/IFactory.h \
    Creational/Factory/IProduct.h
