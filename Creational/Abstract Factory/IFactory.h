#pragma once

#include "IProductA.h"
#include "IProductB.h"

class IFactory
{
public:
    virtual IProdcutA* createConcreteProductA() const = 0;
    virtual IProdcutB* createConcreteProductB() const = 0;
};
