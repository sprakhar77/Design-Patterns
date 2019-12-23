#include <StateBase.h>

class ConcreteStateC : public StateBase
{
public:
    ConcreteStateC(IContext *context);

    virtual void performTaskA() const override;
    virtual void performTaskC() const override;
};
