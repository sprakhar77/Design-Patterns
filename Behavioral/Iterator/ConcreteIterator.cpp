#include "ConcreteIterator.h"
#include <ConcreteAggregate.h>

ConcreteIterator::ConcreteIterator(ConcreteAggregate *aggregator)
{
    m_index = 0;
    m_concreteAggregate = aggregator;
}

int ConcreteIterator::first()
{
    return m_index = 0;
}

void ConcreteIterator::next()
{
    if (m_index < m_concreteAggregate->size())
    {
        m_index++;
    }
}

bool ConcreteIterator::isDone()
{
    return m_index >= m_concreteAggregate->size();
}

int ConcreteIterator::currentItem()
{
    if (!isDone())
    {
        return m_concreteAggregate->at(m_index);
    }
    return -1;
}
