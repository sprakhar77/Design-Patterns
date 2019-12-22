#include <AbstractClass.h>

class ConcreteClassX : public AbstractClass
{
public:
    ConcreteClassX() = default;
    virtual void primitiveOperationA() const override;
    virtual void primitiveOperationB() const override;
};
