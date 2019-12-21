#include <Decorator.h>

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(IComponent * component);
    virtual void performTask() const override;
};
