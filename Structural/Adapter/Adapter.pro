TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Adaptee.cpp \
        TargetAdapter.cpp \
        main.cpp

HEADERS += \
    Adaptee.h \
    IAdaptee.h \
    ITarget.h \
    TargetAdapter.h
