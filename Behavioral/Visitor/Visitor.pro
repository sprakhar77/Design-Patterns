TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteElementA.cpp \
    ConcreteElementB.cpp \
    ConcreteElementC.cpp \
    ConcreteVisitor.cpp

HEADERS += \
    IElement.h \
    IElementVisitor.h \
    ConcreteElementA.h \
    ConcreteElementB.h \
    ConcreteElementC.h \
    ConcreteVisitor.h
