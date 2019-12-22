#include "ConcreteHandlerA.h"
#include <iostream>

bool ConcreteHandlerA::canhandle() const
{
    return false;
}

void ConcreteHandlerA::handleRequest() const
{
    if (canhandle())
    {
        std::cout << "Handled by A" << std::endl;
    }
    else
    {
        std::cout << "Cannot be Handled by A" << std::endl;
        HandlerBase::handleRequest();
    }
}
