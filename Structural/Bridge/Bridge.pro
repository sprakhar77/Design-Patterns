TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteImplementationX.cpp \
        ConcreteImplementationY.cpp \
        RedefinedAbstractionA.cpp \
        RedefinedAbstractionB.cpp \
        main.cpp

HEADERS += \
    ConcreteImplementationX.h \
    ConcreteImplementationY.h \
    IAbstraction.h \
    IImplementor.h \
    RedefinedAbstractionA.h \
    RedefinedAbstractionB.h
