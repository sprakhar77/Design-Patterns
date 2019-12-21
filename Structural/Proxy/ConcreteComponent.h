#include <IComponent.h>

class ConcreteComponent : public IComponent
{
public:
    ConcreteComponent() = default;
    virtual void performTask() const override;
};
