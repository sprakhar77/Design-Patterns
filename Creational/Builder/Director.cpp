#include "Director.h"


void Director::setBuilder(IBuilder *builder)
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

void Director::create()
{
    // Director know the sequence in which the builder needs to construct parts
    m_builder->buildPartC();
    m_builder->buildPartB();
    m_builder->buildPartA();
}

Product Director::get()
{
    return m_builder->get();
}
