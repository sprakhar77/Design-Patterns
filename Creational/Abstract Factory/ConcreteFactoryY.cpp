#include "ConcreteFactoryY.h"
#include "ConcreteProductAY.h"
#include "ConcreteProductBY.h"

ConcreteFactoryY::ConcreteFactoryY()
{
}

IProdcutA *ConcreteFactoryY::createConcreteProductA() const
{
    return new ConcreteProductAY();
}

IProdcutB *ConcreteFactoryY::createConcreteProductB() const
{
    return new ConcreteProductBY();
}
