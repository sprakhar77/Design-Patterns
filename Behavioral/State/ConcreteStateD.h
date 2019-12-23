#include <StateBase.h>

class ConcreteStateD : public StateBase
{
public:
    ConcreteStateD(IContext *context);

    virtual void performTaskB() const override;
    virtual void performTaskD() const override;
};
