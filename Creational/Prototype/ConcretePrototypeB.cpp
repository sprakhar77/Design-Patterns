#include "ConcretePrototypeB.h"

#include <iostream>

IPrototype *ConcretePrototypeB::clone() const
{
    return new ConcretePrototypeB(*this);
}

void ConcretePrototypeB::performTask() const
{
    std::cout << "Performing Task from ConcretePrototypeB" << std::endl;
}
