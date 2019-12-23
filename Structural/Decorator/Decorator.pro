TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteComponent.cpp \
        ConcreteDecoratorA.cpp \
        ConcreteDecoratorB.cpp \
        DecoratorBase.cpp \
        main.cpp

HEADERS += \
    ConcreteComponent.h \
    ConcreteDecoratorA.h \
    ConcreteDecoratorB.h \
    DecoratorBase.h \
    IComponent.h
