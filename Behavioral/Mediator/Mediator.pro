TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    CollegueBase.cpp \
    Mediator.cpp

HEADERS += \
    IMediator.h \
    CollegueBase.h \
    ICollegue.h \
    Mediator.h
