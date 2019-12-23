#pragma once

#include <IFlyweight.h>

class IFlyweightFactory
{
public:
    virtual IFlyweight* createSharedObject(const int &key) = 0;
    virtual IFlyweight* createUnsharedObject() = 0;
};
