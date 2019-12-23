#include <StateBase.h>

class ConcreteStateA : public StateBase
{
public:
    ConcreteStateA(IContext *context);

    virtual void performTaskA() const override;
};
