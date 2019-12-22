#pragma once

class ISubject;

class IObserever
{
public:
    virtual void update(ISubject *subject) = 0;
    virtual int getState() = 0;
};
