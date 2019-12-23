#include "StateA.h"
#include "StateB.h"

#include <iostream>

StateA::StateA(IContext *context) : StateBase(context){}

void StateA::performTaskA() const
{
    std::cout << "Performing Task A" << std::endl;
    m_context->setState(new StateB(m_context));
}
