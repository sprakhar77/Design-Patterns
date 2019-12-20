#include <IPrototype.h>

class IPrototyprFactory
{
public:
    virtual IPrototype* createConcretePrototypeA() const = 0;
    virtual IPrototype* createConcretePrototypeB() const = 0;
};
