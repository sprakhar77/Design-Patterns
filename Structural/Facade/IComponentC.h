#pragma once

class IComponentC
{
public:
    virtual ~IComponentC() {}
    virtual void performTaskForC() const = 0;
};
