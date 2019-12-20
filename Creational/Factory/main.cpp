#include "IProduct.h"
#include "IFactory.h"
#include "ConcreteFactory.h"

#include <iostream>

int main()
{
    IFactory *factory = new ConcreteFactory();
    IProduct *product;

    int option;
    std::cin >> option;

    if (option == 1)
    {
        product = factory->createConcreteProductA();
    }
    else
    {
        product = factory->createConcreteProductB();
    }

    product->init();
    product->performTask();

    return 0;
}
