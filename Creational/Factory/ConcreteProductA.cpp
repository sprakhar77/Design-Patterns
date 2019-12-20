#include "ConcreteProductA.h"

#include <iostream>

ConcreteProductA::ConcreteProductA()
{
}

void ConcreteProductA::init() const
{
    std::cout << "Initializing ConcreteProductA" << std::endl;
}

void ConcreteProductA::performTask() const
{
    std::cout << "Performing task for ConcreteProductA" << std::endl;
}
