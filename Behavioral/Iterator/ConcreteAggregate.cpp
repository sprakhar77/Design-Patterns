#include "ConcreteAggregate.h"
#include <ConcreteIterator.h>

ConcreteAggregate::ConcreteAggregate(const int size)
{
    m_size = size;
    m_list = new int[size];

    // This is not needed, it is just to add dummy values
    for(int i = 0; i < m_size; i++)
    {
        m_list[i] = i + 1;
    }
}

ConcreteAggregate::~ConcreteAggregate()
{
    delete [] m_list;
}

int ConcreteAggregate::at(const int index)
{
    return m_list[index];
}

int ConcreteAggregate::size()
{
    return m_size;
}

IIterator *ConcreteAggregate::createIterator()
{
    return new ConcreteIterator(this);
}
