#include "ConcreteDecoratorB.h"

#include <iostream>

ConcreteDecoratorB::ConcreteDecoratorB(IComponent *component) : DecoratorBase(component) {}

void ConcreteDecoratorB::performTask() const
{
    DecoratorBase::performTask();
    std::cout << "Decorating with B" << std::endl;
}
