#include "ConcreteComponentC.h"

#include <iostream>

void ConcreteComponentC::performTaskForC() const
{
    std::cout << "Task from C" << std::endl;
}
