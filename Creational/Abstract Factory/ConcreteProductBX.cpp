#include "ConcreteProductBX.h"

#include <iostream>

ConcreteProductBX::ConcreteProductBX()
{
}

void ConcreteProductBX::init() const
{
    std::cout << "Initializing ConcreteProductBX" << std::endl;
}

void ConcreteProductBX::performTask() const
{
    std::cout << "Performing task for ConcreteProductBX" << std::endl;
}
