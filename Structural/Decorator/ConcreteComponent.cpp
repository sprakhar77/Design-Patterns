#include "ConcreteComponent.h"

#include <iostream>

void ConcreteComponent::performTask() const
{
    std::cout << "Perform some task" << std::endl;
}
