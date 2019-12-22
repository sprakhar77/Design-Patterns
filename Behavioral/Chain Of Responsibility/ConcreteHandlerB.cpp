#include "ConcreteHandlerB.h"
#include <iostream>

bool ConcreteHandlerB::canhandle() const
{
    return true;
}

void ConcreteHandlerB::handleRequest() const
{
    if (canhandle())
    {
        std::cout << "Handled by B" << std::endl;
    }
    else
    {
        std::cout << "Cannot be Handled by B" << std::endl;
        HandlerBase::handleRequest();
    }
}
