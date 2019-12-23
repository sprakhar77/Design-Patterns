#include "ConcreteDecoratorA.h"

#include <iostream>

ConcreteDecoratorA::ConcreteDecoratorA(IComponent *component) : DecoratorBase(component) {}

void ConcreteDecoratorA::performTask() const
{
    DecoratorBase::performTask();
    std::cout << "Decorating with A" << std::endl;
}
