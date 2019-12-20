#include "ConcreteProductAY.h"

#include <iostream>

ConcreteProductAY::ConcreteProductAY()
{
}

void ConcreteProductAY::init() const
{
    std::cout << "Initializing ConcreteProductAY" << std::endl;
}

void ConcreteProductAY::performTask() const
{
    std::cout << "Performing task for ConcreteProductAY" << std::endl;
}
