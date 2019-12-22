#include "ConcreteMemento.h"

ConcreteMemento::ConcreteMemento(const int &state) : m_state(state) {}

int ConcreteMemento::getState() const
{
    return m_state;
}

void ConcreteMemento::setState(const int &state)
{
    m_state = state;
}
