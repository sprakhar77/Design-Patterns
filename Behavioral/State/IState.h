#pragma once

class IState
{
public:
    virtual ~IState() {}
    virtual void performTaskA() const = 0;
    virtual void performTaskB() const = 0;
    virtual void performTaskC() const = 0;
    virtual void performTaskD() const = 0;
};
