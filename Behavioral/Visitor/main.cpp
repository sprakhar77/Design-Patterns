#include <ConcreteElementA.h>
#include <ConcreteElementB.h>
#include <ConcreteElementC.h>
#include <ConcreteVisitor.h>

int main()
{
    IElement *concreteElementA = new ConcreteElementA();
    IElement *concreteElementB = new ConcreteElementB();
    IElement *concreteElementC = new ConcreteElementC();

    IElementVisitor *concreteVisitor = new ConcreteVisitor();

    concreteElementA->accept(*concreteVisitor);
    concreteElementB->accept(*concreteVisitor);
    concreteElementC->accept(*concreteVisitor);

    return 0;
}
