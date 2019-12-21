#include <IComponentC.h>

class ConcreteComponentC : public IComponentC
{
public:
    ConcreteComponentC() = default;
    virtual void performTaskForC() const override;
};