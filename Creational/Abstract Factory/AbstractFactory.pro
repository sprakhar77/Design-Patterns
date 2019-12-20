TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteFactoryX.cpp \
        ConcreteFactoryY.cpp \
        ConcreteProductAX.cpp \
        ConcreteProductAY.cpp \
        ConcreteProductBX.cpp \
        ConcreteProductBY.cpp \
        main.cpp

HEADERS += \
    ConcreteFactoryX.h \
    ConcreteFactoryY.h \
    ConcreteProductAX.h \
    ConcreteProductAY.h \
    ConcreteProductBX.h \
    ConcreteProductBY.h \
    IFactory.h \
    IProductA.h \
    IProductB.h
