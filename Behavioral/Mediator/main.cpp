#include <CollegueBase.h>
#include <Mediator.h>

int main()
{
    IMediator *mediator = new Mediator();

    ICollegue *collegueA = new CollegueBase(mediator, 1);
    ICollegue *collegueB = new CollegueBase(mediator, 2);
    ICollegue *collegueC = new CollegueBase(mediator, 3);

    mediator->add(collegueA);
    mediator->add(collegueB);
    mediator->add(collegueC);

    collegueA->send("Message from A");

    return 0;
}
