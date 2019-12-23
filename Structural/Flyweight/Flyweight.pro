TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    UnsharedFlyweight.cpp \
    SharedFlyweight.cpp \
    ConcreteFlyweightFactory.cpp

HEADERS += \
    UnsharedFlyweight.h \
    IFlyweight.h \
    SharedFlyweight.h \
    ConcreteFlyweightFactory.h \
    IFlyweightFactory.h
