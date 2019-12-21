#include <Decorator.h>

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(IComponent * component);
    virtual void performTask() const override;
};
