#include <ConcreteComponent.h>

class ProxyComponent : public IComponent
{
public:
    ProxyComponent();
    virtual void performTask() const override;

private:
    IComponent * m_component{nullptr};
};
