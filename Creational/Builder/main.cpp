#include "Director.h"
#include "ConcreteBuilderX.h"
#include "ConcreteBuilderY.h"

#include <iostream>

int main()
{
    Director director;

    // Create objects of type X
    IBuilder *builderX = new ConcreteBuilderX();
    director.setBuilder(builderX);
    director.create();
    std::cout << director.get().allParts() << std::endl;

    // Create objects of type Y
    IBuilder *builderY = new ConcreteBuilderY();
    director.setBuilder(builderY);
    director.create();
    std::cout << director.get().allParts() << std::endl;

    return 0;
}
