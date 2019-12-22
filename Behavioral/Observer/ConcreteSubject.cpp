#include "ConcreteSubject.h"

void ConcreteSubject::add(IObserever *observer)
{
    m_observers.push_back(observer);
}

void ConcreteSubject::notify()
{
    for(const auto observer : m_observers)
    {
        observer->update(this);
    }
}

int ConcreteSubject::getState()
{
    return m_state;
}

void ConcreteSubject::setState(const int state)
{
    m_state = state;
}
