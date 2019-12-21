#include "ConcreteDecoratorA.h"

#include <iostream>

ConcreteDecoratorA::ConcreteDecoratorA(IComponent *component) : Decorator(component) {}

void ConcreteDecoratorA::performTask() const
{
    Decorator::performTask();
    std::cout << "Decorating with A" << std::endl;
}
