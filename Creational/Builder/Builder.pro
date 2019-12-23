TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        BuilderBase.cpp \
        ConcreteBuilderX.cpp \
        ConcreteBuilderY.cpp \
        ConcreteDirector.cpp \
        Product.cpp \
        main.cpp

HEADERS += \
    BuilderBase.h \
    ConcreteBuilderX.h \
    ConcreteBuilderY.h \
    ConcreteDirector.h \
    IBuilder.h \
    IDirector.h \
    Product.h
