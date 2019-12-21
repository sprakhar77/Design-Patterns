#include "ConcreteDecoratorB.h"

#include <iostream>

ConcreteDecoratorB::ConcreteDecoratorB(IComponent *component) : Decorator(component) {}

void ConcreteDecoratorB::performTask() const
{
    Decorator::performTask();
    std::cout << "Decorating with B" << std::endl;
}
