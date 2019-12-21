#include "RedefinedAbstractionB.h"

#include <iostream>

RedefinedAbstractionB::RedefinedAbstractionB (IImplementor *implementor) : m_implementor(implementor){}

RedefinedAbstractionB::~RedefinedAbstractionB()
{
    delete m_implementor;
}

void RedefinedAbstractionB::performTask() const
{
    std::cout << "Performing from RedefinedAbstractionB" << std::endl;
    m_implementor->someImplementation();
}
