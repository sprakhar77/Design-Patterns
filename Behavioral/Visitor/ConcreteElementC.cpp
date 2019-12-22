#include "ConcreteElementC.h"
#include "IElementVisitor.h"

#include <iostream>

void ConcreteElementC::someInformationC() const
{
    std::cout << "Some Information on C" << std::endl;
}

void ConcreteElementC::accept(const IElementVisitor &visitor)
{
    visitor.visit(*this);
}
