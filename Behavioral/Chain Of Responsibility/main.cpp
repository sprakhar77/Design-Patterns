#include <ConcreteHandlerA.h>
#include <ConcreteHandlerB.h>

int main()
{
    IHandler *handler = new ConcreteHandlerA();
    handler->setHandler(new ConcreteHandlerB());

    handler->handleRequest();

    return 0;
}
