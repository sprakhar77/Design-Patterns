TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteHandlerA.cpp \
    ConcreteHandlerB.cpp \
    HandlerBase.cpp

HEADERS += \
    IHandler.h \
    ConcreteHandlerA.h \
    ConcreteHandlerB.h \
    HandlerBase.h
