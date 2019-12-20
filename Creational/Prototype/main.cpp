#include <ConcretePrototypeFactory.h>

int main()
{
    IPrototyprFactory *factory = new ConcretePrototypeFactory();

    // Create concretePrototypeA and its clone
    IPrototype* concretePrototypeA = factory->createConcretePrototypeA();
    concretePrototypeA->performTask();
    IPrototype* cloneOfConcreatePrototypeA = concretePrototypeA->clone();
    cloneOfConcreatePrototypeA->performTask();

    // Create concretePrototypeB and its clone
    IPrototype* concretePrototypeB = factory->createConcretePrototypeB();
    concretePrototypeB->performTask();
    IPrototype* cloneOfConcreatePrototypeB = concretePrototypeB->clone();
    cloneOfConcreatePrototypeB->performTask();
}
