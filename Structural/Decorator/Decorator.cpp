#include "Decorator.h"

Decorator::Decorator(IComponent *component)
{
    m_component = component;
}

void Decorator::performTask() const
{
    m_component->performTask();
}
