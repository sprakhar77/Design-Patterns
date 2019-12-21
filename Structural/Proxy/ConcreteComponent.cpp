#include "ConcreteComponent.h"

#include <iostream>

void ConcreteComponent::performTask() const
{
    std::cout << "Real Task" << std::endl;
}
