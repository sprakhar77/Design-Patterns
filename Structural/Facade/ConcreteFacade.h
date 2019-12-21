#include <IFacade.h>

class IComponentA;
class IComponentB;
class IComponentC;

class ConcreteFacade : public IFacade
{
public:
    ConcreteFacade();

    virtual void operationX() const override;
    virtual void operationY() const override;

private:
    IComponentA * m_componentA;
    IComponentB * m_componentB;
    IComponentC* m_componentC;
};