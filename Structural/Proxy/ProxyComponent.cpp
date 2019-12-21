#include "ProxyComponent.h"

#include <iostream>

ProxyComponent::ProxyComponent()
{
    m_component = new ConcreteComponent();
}

void ProxyComponent::performTask() const
{
    std::cout << "Work some proxy function" << std::endl;
    m_component->performTask();
}
