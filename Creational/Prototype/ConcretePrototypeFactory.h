#include <IPrototypeFactory.h>

class ConcretePrototypeFactory : public IPrototyprFactory
{
public:
    ConcretePrototypeFactory() = default;

    IPrototype* createConcretePrototypeA() const override;
    IPrototype* createConcretePrototypeB() const override;

};
