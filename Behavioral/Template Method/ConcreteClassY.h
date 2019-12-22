#include <AbstractClass.h>

class ConcreteClassY : public AbstractClass
{
public:
    ConcreteClassY() = default;
    virtual void primitiveOperationA() const override;
    virtual void primitiveOperationB() const override;
};
