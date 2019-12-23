#include "UnsharedFlyweight.h"

#include <iostream>

void UnsharedFlyweight::operation() const
{
    std::cout << "Operation from extrinsic(Unshared) component" << std::endl;
}
