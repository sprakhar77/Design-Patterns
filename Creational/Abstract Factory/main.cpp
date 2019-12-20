#include "IProductA.h"
#include "IFactory.h"
#include "ConcreteFactoryX.h"
#include "ConcreteFactoryY.h"

int main()
{
    // Create factory based on some specific condition eg - OS
    IFactory *factory;
#ifdef OSX
    factory = new ConcreteFactoryX();
#else
    factory = new ConcreteFactoryY();
#endif

    // Products will now be made specifc to that OS
    IProdcutA *productA = factory->createConcreteProductA();
    productA->init();
    productA->performTask();

    IProdcutB *productB = factory->createConcreteProductB();
    productB->init();
    productB->performTask();

    return 0;
}
