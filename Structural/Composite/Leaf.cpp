#include "Leaf.h"

#include <iostream>

Leaf::Leaf(const int &id)
{
    m_id = id;
}

void Leaf::operation() const
{
    std::cout << m_id << std::endl;
}
