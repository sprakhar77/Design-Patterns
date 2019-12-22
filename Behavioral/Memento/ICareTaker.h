#pragma once

class ICareTaker
{
public:
    virtual ~ICareTaker() {}
    virtual void save() = 0;
    virtual void undo() = 0;
};
