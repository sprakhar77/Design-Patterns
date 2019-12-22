#include <Invoker.h>
#include <ConcreteCommandA.h>
#include <ConcreteCommandB.h>
#include <ConcreteRecieverX.h>
#include <ConcreteRecieverY.h>

int main()
{
    ICommand *commandA = new ConcreteCommandA(new ConcreteRecieverX());
    ICommand *commandB = new ConcreteCommandA(new ConcreteRecieverY());

    Invoker *invoker = new Invoker();
    invoker->setCommand(commandA);
    invoker->confirm();

    invoker->setCommand(commandB);
    invoker->confirm();

    return 0;
}
