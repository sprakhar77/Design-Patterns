#include "StateC.h"
#include "StateD.h"
#include "StateA.h"

#include <iostream>

StateC::StateC(IContext *context) : StateBase(context){}

void StateC::performTaskA() const
{
    std::cout << "Performing some task from C which will transition to state A" << std::endl;
    m_context->setState(new StateA(m_context));
}

void StateC::performTaskC() const
{
    std::cout << "Performing Task C" << std::endl;
    m_context->setState(new StateD(m_context));
}
