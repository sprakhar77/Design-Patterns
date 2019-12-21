#pragma once

class IComponent
{
private:
    virtual ~IComponent() {}
    virtual void performTask() const = 0;
};