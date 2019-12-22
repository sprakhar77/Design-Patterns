#pragma once

class IMemento
{
public:
    virtual int getState() const = 0;
    virtual void setState(const int &state) = 0;
};
