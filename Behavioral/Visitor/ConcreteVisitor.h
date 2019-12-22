#include <IElementVisitor.h>

class ConcreteVisitor : public IElementVisitor
{
public:
    ConcreteVisitor() = default;
    virtual void visit(const ConcreteElementA &concreteElementA) const override;
    virtual void visit(const ConcreteElementB &concreteElementB) const override;
    virtual void visit(const ConcreteElementC &concreteElementC) const override;
};
