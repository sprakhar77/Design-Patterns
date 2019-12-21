TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Composite.cpp \
        Leaf.cpp \
        main.cpp

HEADERS += \
    Composite.h \
    IComponent.h \
    Leaf.h
