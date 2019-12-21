TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteComponent.cpp \
    ProxyComponent.cpp

HEADERS += \
    IComponent.h \
    ConcreteComponent.h \
    ProxyComponent.h \
    icomponent.h
