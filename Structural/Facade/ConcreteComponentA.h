#include <IComponentA.h>

class ConcreteComponentA : public IComponentA
{
public:
    ConcreteComponentA() = default;
    virtual void performTaskForA() const override;
};