TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ConcreteStateA.cpp \
    ConcreteStateB.cpp \
    ConcreteStateC.cpp \
    ConcreteStateD.cpp \
        main.cpp \
    StateBase.cpp \
    ConcreteContext.cpp

HEADERS += \
    ConcreteStateA.h \
    ConcreteStateB.h \
    ConcreteStateC.h \
    ConcreteStateD.h \
    StateBase.h \
    IState.h \
    IContext.h \
    ConcreteContext.h
