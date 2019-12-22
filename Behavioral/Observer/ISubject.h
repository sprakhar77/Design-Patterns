#include <IObserver.h>

#pragma once

class ISubject
{
public:
    virtual void add(IObserever* observer) = 0;
    virtual void notify() = 0;
    virtual int getState() = 0;
    virtual void setState(const int state) = 0;
};