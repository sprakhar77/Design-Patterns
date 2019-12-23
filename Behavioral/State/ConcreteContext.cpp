#include "ConcreteContext.h"
#include <ConcreteStateA.h>

ConcreteContext::ConcreteContext()
{
    m_currentState = new ConcreteStateA(this);
}

void ConcreteContext::actionA()
{
    if (m_currentState)
    {
        m_currentState->performTaskA();
    }
}

void ConcreteContext::actionB()
{
    if (m_currentState)
    {
        m_currentState->performTaskB();
    }
}

void ConcreteContext::actionC()
{
    if (m_currentState)
    {
        m_currentState->performTaskC();
    }
}

void ConcreteContext::actionD()
{
    if (m_currentState)
    {
        m_currentState->performTaskD();
    }
}


void ConcreteContext::setState(IState *state)
{
    if (m_currentState)
    {
        delete m_currentState;
    }
    m_currentState = state;
}
