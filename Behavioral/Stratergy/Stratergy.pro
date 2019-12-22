TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteStratergyA.cpp \
    ConcreteStratergyB.cpp \
    Context.cpp

HEADERS += \
    IStratergy.h \
    ConcreteStratergyA.h \
    ConcreteStratergyB.h \
    IContext.h \
    Context.h
