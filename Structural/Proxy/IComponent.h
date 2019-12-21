#pragma once

class IComponent
{
public:
    virtual ~IComponent(){}
    virtual void performTask() const = 0;
};
