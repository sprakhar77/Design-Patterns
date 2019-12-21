#include "RedefinedAbstractionA.h"

#include <iostream>

RedefinedAbstractionA::RedefinedAbstractionA (IImplementor *implementor) : m_implementor(implementor){}

RedefinedAbstractionA::~RedefinedAbstractionA()
{
    delete m_implementor;
}

void RedefinedAbstractionA::performTask() const
{
    std::cout << "Performing from RedefinedAbstractionA" << std::endl;
    m_implementor->someImplementation();
}
