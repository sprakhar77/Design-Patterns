#include <DecoratorBase.h>

class ConcreteDecoratorB : public DecoratorBase
{
public:
    ConcreteDecoratorB(IComponent * component);
    virtual void performTask() const override;
};
