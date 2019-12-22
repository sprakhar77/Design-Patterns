#pragma once

class IMemento;

class IOrignator
{
public:
    virtual int getState() const = 0;
    virtual void setState(const int &state) = 0;
    virtual IMemento *createMemento() = 0;
    virtual void setMemento(const IMemento &memento) = 0;
};
