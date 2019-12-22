#include <Context.h>
#include <ConcreteStratergyA.h>
#include <ConcreteStratergyB.h>

int main()
{
    IContext *contextA = new Context(new ConcreteStratergyA());
    contextA->contextInterface();

    IContext *contextB = new Context(new ConcreteStratergyB());
    contextB->contextInterface();

    return 0;
}
