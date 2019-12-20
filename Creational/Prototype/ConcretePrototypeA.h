#include "IPrototype.h"

class ConcretePrototypeA : public IPrototype
{
public:
    ConcretePrototypeA() = default;

    IPrototype *clone() const override;
    void performTask() const override;
};

