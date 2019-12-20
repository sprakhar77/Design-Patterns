TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteBuilderX.cpp \
        ConcreteBuilderY.cpp \
        Director.cpp \
        Product.cpp \
        main.cpp

HEADERS += \
    ConcreteBuilderX.h \
    ConcreteBuilderY.h \
    Director.h \
    IBuilder.h \
    Product.h
