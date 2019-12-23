#include "StateBase.h"

#include <iostream>

StateBase::StateBase(IContext *context) : m_context(context) {}

void StateBase::performTaskA() const
{
    std::cout << "Sorry Cannot perform Task A in this state" << std::endl;
}

void StateBase::performTaskB() const
{
     std::cout << "Sorry Cannot perform Task B in this state" << std::endl;
}

void StateBase::performTaskC() const
{
     std::cout << "Sorry Cannot perform Task C in this state" << std::endl;
}

void StateBase::performTaskD() const
{
     std::cout << "Sorry Cannot perform Task C in this state" << std::endl;
}
