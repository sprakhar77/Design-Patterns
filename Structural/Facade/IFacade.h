#pragma once

class IFacade
{
public:
    virtual ~IFacade() {}
    virtual void operationX() const = 0;
    virtual void operationY() const = 0;
};
