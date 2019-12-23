#include "DecoratorBase.h"

DecoratorBase::DecoratorBase(IComponent *component)
{
    m_component = component;
}

void DecoratorBase::performTask() const
{
    m_component->performTask();
}
