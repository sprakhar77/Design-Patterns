#include "ConcreteProductBY.h"

#include <iostream>

ConcreteProductBY::ConcreteProductBY()
{
}

void ConcreteProductBY::init() const
{
    std::cout << "Initializing ConcreteProductBY" << std::endl;
}

void ConcreteProductBY::performTask() const
{
    std::cout << "Performing task for ConcreteProductBY" << std::endl;
}
