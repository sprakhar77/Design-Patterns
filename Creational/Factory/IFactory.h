#pragma once

#include "IProduct.h"

class IFactory
{
public:
    virtual IProduct* createConcreteProductA() const = 0;
    virtual IProduct* createConcreteProductB() const = 0;
};
