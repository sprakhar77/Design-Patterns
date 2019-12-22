#include "ConcreteObserverA.h"
#include <ISubject.h>

ConcreteObserverA::ConcreteObserverA(const int state) : m_state(state) {}

int ConcreteObserverA::getState()
{
    return m_state;
}

void ConcreteObserverA::update(ISubject *subject)
{
    m_state = subject->getState();
}
