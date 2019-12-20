#include "ConcretePrototypeFactory.h"
#include <ConcretePrototypeA.h>
#include <ConcretePrototypeB.h>

IPrototype *ConcretePrototypeFactory::createConcretePrototypeA() const
{
    return new ConcretePrototypeA();
}

IPrototype *ConcretePrototypeFactory::createConcretePrototypeB() const
{
    return new ConcretePrototypeB();
}
