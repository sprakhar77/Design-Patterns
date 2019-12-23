#include <DecoratorBase.h>

class ConcreteDecoratorA : public DecoratorBase
{
public:
    ConcreteDecoratorA(IComponent * component);
    virtual void performTask() const override;
};
