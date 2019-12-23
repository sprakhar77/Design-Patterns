TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    StateBase.cpp \
    StateA.cpp \
    StateB.cpp \
    StateC.cpp \
    StateD.cpp \
    ConcreteContext.cpp

HEADERS += \
    StateBase.h \
    IState.h \
    StateA.h \
    StateB.h \
    StateC.h \
    StateD.h \
    IContext.h \
    ConcreteContext.h
