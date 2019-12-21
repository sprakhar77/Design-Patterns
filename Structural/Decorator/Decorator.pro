TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteComponent.cpp \
        ConcreteDecoratorA.cpp \
        ConcreteDecoratorB.cpp \
        Decorator.cpp \
        main.cpp

HEADERS += \
    ConcreteComponent.h \
    ConcreteDecoratorA.h \
    ConcreteDecoratorB.h \
    Decorator.h \
    IComponent.h
