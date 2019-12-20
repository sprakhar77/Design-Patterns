#include "ConcreteFactory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

ConcreteFactory::ConcreteFactory()
{
}

IProduct *ConcreteFactory::createConcreteProductA() const
{
    return new ConcreteProductA();
}

IProduct *ConcreteFactory::createConcreteProductB() const
{
    return new ConcreteProductB();
}
