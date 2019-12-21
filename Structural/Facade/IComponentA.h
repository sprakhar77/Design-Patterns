#pragma once

class IComponentA
{
public:
    virtual ~IComponentA() {}
    virtual void performTaskForA() const = 0;
};
