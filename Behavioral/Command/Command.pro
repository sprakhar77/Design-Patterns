TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    ConcreteCommandA.cpp \
    ConcreteCommandB.cpp \
    ConcreteRecieverX.cpp \
    ConcreteRecieverY.cpp \
    Invoker.cpp

HEADERS += \
    IInvoker.h \
    IReciever.h \
    ICommand.h \
    ConcreteCommandA.h \
    ConcreteCommandB.h \
    ConcreteRecieverX.h \
    ConcreteRecieverY.h \
    Invoker.h
