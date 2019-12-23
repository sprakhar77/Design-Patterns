#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

#include <iostream>

ConcreteStateA::ConcreteStateA(IContext *context) : StateBase(context){}

void ConcreteStateA::performTaskA() const
{
    std::cout << "Performing Task A" << std::endl;
    m_context->setState(new ConcreteStateB(m_context));
}
