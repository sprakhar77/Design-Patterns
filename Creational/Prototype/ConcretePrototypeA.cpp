#include "ConcretePrototypeA.h"

#include <iostream>

IPrototype *ConcretePrototypeA::clone() const
{
    return new ConcretePrototypeA(*this);
}

void ConcretePrototypeA::performTask() const
{
    std::cout << "Performing task from ConcretePrototypeA" << std::endl;
}
