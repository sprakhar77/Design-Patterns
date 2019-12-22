TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteObserverA.cpp \
    ConcreteObserverB.cpp \
    ConcreteSubject.cpp

HEADERS += \
    IObserver.h \
    ConcreteObserverA.h \
    ConcreteObserverB.h \
    ISubject.h \
    ConcreteSubject.h
