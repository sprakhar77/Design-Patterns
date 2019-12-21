#include "ConcreteFacade.h"
#include <ConcreteComponentA.h>
#include <ConcreteComponentB.h>
#include <ConcreteComponentC.h>

ConcreteFacade::ConcreteFacade()
{
    m_componentA = new ConcreteComponentA();
    m_componentB = new ConcreteComponentB();
    m_componentC = new ConcreteComponentC();
}

void ConcreteFacade::operationX() const
{
    m_componentA->performTaskForA();
    m_componentB->performTaskForB();
}

void ConcreteFacade::operationY() const
{
    m_componentC->performTaskForC();
}
