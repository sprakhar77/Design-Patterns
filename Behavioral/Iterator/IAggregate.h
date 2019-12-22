#pragma once

#include <IIterator.h>

class IAggregate
{
public :
    virtual ~IAggregate() {}
    virtual IIterator* createIterator() = 0;
};
