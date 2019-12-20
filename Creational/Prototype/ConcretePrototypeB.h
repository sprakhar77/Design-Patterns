#include <IPrototype.h>

class ConcretePrototypeB : public IPrototype
{
public:
    ConcretePrototypeB() = default;

    IPrototype* clone() const override;
    void performTask() const override;
};
