TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteClassX.cpp \
    AbstractClass.cpp \
    ConcreteClassY.cpp

HEADERS += \
    ConcreteClassX.h \
    AbstractClass.h \
    ConcreteClassY.h
