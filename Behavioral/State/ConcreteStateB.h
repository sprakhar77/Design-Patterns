#include <StateBase.h>

class ConcreteStateB : public StateBase
{
public:
    ConcreteStateB(IContext *context);

    virtual void performTaskB() const override;
};
