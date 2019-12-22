#include "ConcreteElementA.h"
#include "IElementVisitor.h"

#include <iostream>

void ConcreteElementA::someInformationA() const
{
    std::cout << "Some Information on A" << std::endl;
}

void ConcreteElementA::accept(const IElementVisitor &visitor)
{
    visitor.visit(*this);
}
