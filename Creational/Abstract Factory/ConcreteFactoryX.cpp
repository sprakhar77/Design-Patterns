#include "ConcreteFactoryX.h"
#include "ConcreteProductAX.h"
#include "ConcreteProductBX.h"

ConcreteFactoryX::ConcreteFactoryX()
{
}

IProdcutA *ConcreteFactoryX::createConcreteProductA() const
{
    return new ConcreteProductAX();
}

IProdcutB *ConcreteFactoryX::createConcreteProductB() const
{
    return new ConcreteProductBX();
}
