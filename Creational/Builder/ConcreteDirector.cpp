#include "ConcreteDirector.h"


void ConcreteDirector::setBuilder(IBuilder *builder)
{
    if (!builder)
    {
        return;
    }

    if (m_builder)
    {
        delete m_builder;
    }
    m_builder = builder;
}

void ConcreteDirector::create()
{
    // Director know the sequence in which the builder needs to construct parts
    m_builder->buildPartC();
    m_builder->buildPartB();
    m_builder->buildPartA();
}

Product ConcreteDirector::get()
{
    return m_builder->get();
}
