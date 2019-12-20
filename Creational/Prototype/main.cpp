#include <ConcretePrototypeFactory.h>

#include <iostream>

int main()
{
    IPrototyprFactory *factory = new ConcretePrototypeFactory();
    IPrototype *prototype, *cloneOfPrototype;
    int option;

    std::cin >> option;

    if (option == 1)
    {
        prototype = factory->createConcretePrototypeA();
    }
    else
    {
        prototype = factory->createConcretePrototypeB();
    }

    prototype->performTask();
    cloneOfPrototype = prototype->clone();
    cloneOfPrototype->performTask();

    return 0;
}
