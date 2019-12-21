#include "ConcreteComponentA.h"

#include <iostream>

void ConcreteComponentA::performTaskForA() const
{
    std::cout << "Task from A" << std::endl;
}
