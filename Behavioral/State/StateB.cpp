#include "StateB.h"
#include "StateC.h"

#include <iostream>

StateB::StateB(IContext *context) : StateBase(context){}

void StateB::performTaskB() const
{
    std::cout << "Performing Task B" << std::endl;
    m_context->setState(new StateC(m_context));
}
