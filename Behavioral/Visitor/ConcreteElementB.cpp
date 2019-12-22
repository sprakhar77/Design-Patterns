#include "ConcreteElementB.h"
#include "IElementVisitor.h"

#include <iostream>

void ConcreteElementB::someInformationB() const
{
    std::cout << "Some Information on B" << std::endl;
}

void ConcreteElementB::accept(const IElementVisitor &visitor)
{
    visitor.visit(*this);
}
