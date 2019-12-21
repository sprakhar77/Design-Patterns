#include <IComponentB.h>

class ConcreteComponentB : public IComponentB
{
public:
    ConcreteComponentB() = default;
    virtual void performTaskForB() const override;
};