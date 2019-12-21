#include "ConcreteComponentB.h"

#include <iostream>

void ConcreteComponentB::performTaskForB() const
{
    std::cout << "Task from B" << std::endl;
}
