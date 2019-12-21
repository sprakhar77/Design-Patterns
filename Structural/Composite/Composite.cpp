#include "Composite.h"

Composite::~Composite()
{
    for(const auto child : m_children)
    {
        delete child;
    }
}

void Composite::add(IComponent *component)
{
    m_children.push_back(component);
}

IComponent *Composite::getChild(const int &index)
{
    if (index >= 0 && index < m_children.size())
    {
        return m_children[index];
    }
    return nullptr;
}

void Composite::operation() const
{
    for(const auto child : m_children)
    {
        child->operation();
    }
}
