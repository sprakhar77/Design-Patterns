#include "ConcreteStateC.h"
#include "ConcreteStateD.h"
#include "ConcreteStateA.h"

#include <iostream>

ConcreteStateC::ConcreteStateC(IContext *context) : StateBase(context){}

void ConcreteStateC::performTaskA() const
{
    std::cout << "Performing some task from C which will transition to state A" << std::endl;
    m_context->setState(new ConcreteStateA(m_context));
}

void ConcreteStateC::performTaskC() const
{
    std::cout << "Performing Task C" << std::endl;
    m_context->setState(new ConcreteStateD(m_context));
}
