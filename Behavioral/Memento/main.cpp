#include <ConcreteCareTaker.h>
#include <ConcreteOrignator.h>

#include <iostream>

int main()
{
    IOrignator *orignator = new ConcreteOrignator();
    ICareTaker *careTaker = new ConcreteCareTaker(orignator);

    // Add states
    orignator->setState(1);
    careTaker->save();

    orignator->setState(2);
    careTaker->save();

    orignator->setState(3);
    careTaker->save();

    orignator->setState(4);

    // reverse print states
    std::cout << orignator->getState() << std::endl;

    careTaker->undo();
    std::cout << orignator->getState() << std::endl;

    careTaker->undo();
    std::cout << orignator->getState() << std::endl;

    careTaker->undo();
    std::cout << orignator->getState() << std::endl;

    return 0;
}
