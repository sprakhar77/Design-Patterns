#include "ConcreteFlyweightFactory.h"
#include <SharedFlyweight.h>
#include <UnsharedFlyweight.h>

IFlyweight *ConcreteFlyweightFactory::createSharedObject(const int &key)
{
    if (m_sharedFlyweightObjects.find(key) != m_sharedFlyweightObjects.end())
    {
        return m_sharedFlyweightObjects[key];
    }
    return m_sharedFlyweightObjects[key] = new SharedFlyweight(key);
}

IFlyweight *ConcreteFlyweightFactory::createUnsharedObject()
{
    return new UnsharedFlyweight();
}
