#include "ConcreteStateD.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

#include <iostream>

ConcreteStateD::ConcreteStateD(IContext *context) : StateBase(context){}

void ConcreteStateD::performTaskB() const
{
    std::cout << "Performing some task from D which will transition to state B" << std::endl;
    m_context->setState(new ConcreteStateB(m_context));
}

void ConcreteStateD::performTaskD() const
{
    std::cout << "Performing Task D" << std::endl;
    m_context->setState(new ConcreteStateA(m_context));
}
