#include "ConcreteProductAX.h"

#include <iostream>

ConcreteProductAX::ConcreteProductAX()
{
}

void ConcreteProductAX::init() const
{
    std::cout << "Initializing ConcreteProductAX" << std::endl;
}

void ConcreteProductAX::performTask() const
{
    std::cout << "Performing task for ConcreteProductAX" << std::endl;
}
