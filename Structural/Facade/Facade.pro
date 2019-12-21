TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteComponentA.cpp \
    ConcreteComponentB.cpp \
    ConcreteComponentC.cpp \
    ConcreteFacade.cpp

HEADERS += \
    IComponentA.h \
    IComponentB.h \
    IComponentC.h \
    ConcreteComponentA.h \
    ConcreteComponentB.h \
    ConcreteComponentC.h \
    IFacade.h \
    ConcreteFacade.h
