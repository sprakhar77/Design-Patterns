#pragma once

class IPrototype
{
public:
    virtual void performTask() const = 0;
    virtual IPrototype* clone() const = 0;
};
