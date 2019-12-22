#pragma once

class IReciever
{
public:
    virtual ~IReciever() {}
    virtual void performTask() const = 0;
};
