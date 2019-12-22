#include <ConcreteObserverA.h>
#include <ConcreteObserverB.h>
#include <ConcreteSubject.h>

#include <iostream>

int main()
{
    ISubject * subject = new ConcreteSubject();
    subject->setState(5);

    IObserever *observerA = new ConcreteObserverA(1);
    IObserever *observerB = new ConcreteObserverB(2);

    subject->add(observerA);
    subject->add(observerB);

    std::cout << observerA->getState() << " " << observerB->getState() << std::endl;

    subject->setState(1);
    subject->notify();

    std::cout << observerA->getState() << " " << observerB->getState() << std::endl;

    return 0;
}
