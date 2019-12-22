TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteAggregate.cpp \
    ConcreteIterator.cpp

HEADERS += \
    IIterator.h \
    IAggregate.h \
    ConcreteAggregate.h \
    ConcreteIterator.h
