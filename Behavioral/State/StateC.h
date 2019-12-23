#include <StateBase.h>

class StateC : public StateBase
{
public:
    StateC(IContext *context);

    virtual void performTaskA() const override;
    virtual void performTaskC() const override;
};
