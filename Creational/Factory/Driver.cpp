#include "Driver.h"
#include "IProduct.h"
#include "IFactory.h"
#include "ConcreteFactory.h"

Driver::Driver()
{
}

void Driver::execute() const
{
    IFactory *factory = new ConcreteFactory();
    IProduct *productA = factory->createConcreteProductA();
    IProduct *productB = factory->createConcreteProductB();
 }
