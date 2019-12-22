#include "ConcreteObserverB.h"
#include <ISubject.h>

ConcreteObserverB::ConcreteObserverB(const int state) : m_state(state) {}

int ConcreteObserverB::getState()
{
    return m_state;
}

void ConcreteObserverB::update(ISubject *subject)
{
    m_state = subject->getState();
}
