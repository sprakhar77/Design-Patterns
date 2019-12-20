#include "Driver.h"
#include "IProductA.h"
#include "IFactory.h"
#include "ConcreteFactoryX.h"
#include "ConcreteFactoryY.h"

Driver::Driver()
{
}

void Driver::execute() const
{
    // Factory with for X type
    IFactory *factoryX = new ConcreteFactoryX();
    IProdcutA *productAX = factoryX->createConcreteProductA();
    IProdcutB *productBX = factoryX->createConcreteProductB();

    //Factory for Y type
    IFactory *factoryY = new ConcreteFactoryY();
    IProdcutA *productAY = factoryY->createConcreteProductA();
    IProdcutB *productBY = factoryY->createConcreteProductB();
 }
