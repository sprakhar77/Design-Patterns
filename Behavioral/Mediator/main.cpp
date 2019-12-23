#include <ConcreteCollegue.h>
#include <ConcreteMediator.h>

int main()
{
    IMediator *mediator = new ConcreteMediator();

    ICollegue *collegueA = new ConcreteCollegue(mediator, 1);
    ICollegue *collegueB = new ConcreteCollegue(mediator, 2);
    ICollegue *collegueC = new ConcreteCollegue(mediator, 3);

    mediator->add(collegueA);
    mediator->add(collegueB);
    mediator->add(collegueC);

    collegueA->send("Message from A");

    return 0;
}
