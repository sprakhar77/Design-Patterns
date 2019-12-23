#include<ConcreteContext.h>

int main()
{
    IContext *concreteContext = new ConcreteContext();

    concreteContext->actionA();
    concreteContext->actionB();
    concreteContext->actionC();

    concreteContext->actionB();

    return 0;
}
