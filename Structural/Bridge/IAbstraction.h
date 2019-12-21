#pragma once

class IAbstraction
{
public:
    virtual ~IAbstraction() {}
    virtual void performTask() const = 0;
};
