#include "ConcreteVisitor.h"
#include <ConcreteElementA.h>
#include <ConcreteElementB.h>
#include <ConcreteElementC.h>

#include <iostream>

void ConcreteVisitor::visit(const ConcreteElementA &concreteElementA) const
{
    std::cout << "Concrete Visitor : ";
    concreteElementA.someInformationA();
}

void ConcreteVisitor::visit(const ConcreteElementB &concreteElementB) const
{
    std::cout << "Concrete Visitor : ";
    concreteElementB.someInformationB();
}

void ConcreteVisitor::visit(const ConcreteElementC &concreteElementC) const
{
    std::cout << "Concrete Visitor : ";
    concreteElementC.someInformationC();
}
