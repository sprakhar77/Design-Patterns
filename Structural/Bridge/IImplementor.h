#pragma once

class IImplementor
{
public:
    virtual ~IImplementor() {}
    virtual void someImplementation() const = 0;
};
