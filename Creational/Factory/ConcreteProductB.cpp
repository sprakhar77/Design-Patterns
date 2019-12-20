#include "ConcreteProductB.h"

#include <iostream>

ConcreteProductB::ConcreteProductB()
{
}

void ConcreteProductB::init() const
{
    std::cout << "Initializing ConcreteProductB" << std::endl;
}

void ConcreteProductB::performTask() const
{
    std::cout << "Performing task for ConcreteProductB" << std::endl;
}
