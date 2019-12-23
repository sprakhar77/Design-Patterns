#include "ConcreteStateB.h"
#include "ConcreteStateC.h"

#include <iostream>

ConcreteStateB::ConcreteStateB(IContext *context) : StateBase(context){}

void ConcreteStateB::performTaskB() const
{
    std::cout << "Performing Task B" << std::endl;
    m_context->setState(new ConcreteStateC(m_context));
}
