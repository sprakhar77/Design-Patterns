#include <ConcreteAggregate.h>
#include <ConcreteIterator.h>

#include <iostream>

int main()
{
    ConcreteAggregate *aggregate = new ConcreteAggregate(10);
    IIterator *iterator = aggregate->createIterator();

    for(; !iterator->isDone(); iterator->next())
    {
        std::cout << "Item :" << iterator->currentItem(); << std::endl;
    }

    return 0;
}
