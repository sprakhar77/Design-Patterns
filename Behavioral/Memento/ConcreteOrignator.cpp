#include "ConcreteOrignator.h"
#include <ConcreteMemento.h>

int ConcreteOrignator::getState() const
{
    return m_state;
}

void ConcreteOrignator::setState(const int &state)
{
    m_state = state;
}

void ConcreteOrignator::setMemento(const IMemento &memento)
{
    m_state = memento.getState();
}

IMemento *ConcreteOrignator::createMemento()
{
    return new ConcreteMemento(m_state);
}
