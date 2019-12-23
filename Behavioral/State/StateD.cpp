#include "StateD.h"
#include "StateA.h"
#include "StateB.h"

#include <iostream>

StateD::StateD(IContext *context) : StateBase(context){}

void StateD::performTaskB() const
{
    std::cout << "Performing some task from D which will transition to state B" << std::endl;
    m_context->setState(new StateB(m_context));
}

void StateD::performTaskD() const
{
    std::cout << "Performing Task D" << std::endl;
    m_context->setState(new StateA(m_context));
}
