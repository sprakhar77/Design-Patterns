#include "SharedFlyweight.h"

#include <iostream>

SharedFlyweight::SharedFlyweight(const int key) : m_key(key) {}

void SharedFlyweight::operation() const
{
    std::cout << "Operation from instrinsic(Shared) component" << std::endl;
}
