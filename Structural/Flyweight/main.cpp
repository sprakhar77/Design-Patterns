#include <ConcreteFlyweightFactory.h>

int main()
{
    IFlyweightFactory *factory = new ConcreteFlyweightFactory();
    IFlyweight *sharedObject = factory->createSharedObject(1);
    IFlyweight *unsharedObject = factory->createUnsharedObject();

    // For this object no new object/memory will be created as it already exists
    IFlyweight *newSharedObject = factory->createSharedObject(1);

    assert(sharedObject == newSharedObject);

    return 0;
}
