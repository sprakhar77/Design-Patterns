#pragma once

class IComponentB
{
public:
    virtual ~IComponentB() {}
    virtual void performTaskForB() const = 0;
};
