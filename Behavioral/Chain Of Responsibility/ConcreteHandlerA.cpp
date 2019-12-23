#include "ConcreteHandlerA.h"
#include <iostream>

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
