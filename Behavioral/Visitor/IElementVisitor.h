#pragma once

class ConcreteElementA;
class ConcreteElementB;
class ConcreteElementC;

class IElementVisitor
{
public:
    virtual void visit(const ConcreteElementA& concreteElementA) const = 0;
    virtual void visit(const ConcreteElementB& concreteElementB) const = 0;
    virtual void visit(const ConcreteElementC& concreteElementC) const = 0;
};
