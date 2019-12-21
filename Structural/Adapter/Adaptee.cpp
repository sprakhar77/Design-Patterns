#include "Adaptee.h"

#include <iostream>

void Adaptee::performSomeTaskDiffrently() const
{
    std::cout << "Performing task from Adaptee" << std::endl;
}
