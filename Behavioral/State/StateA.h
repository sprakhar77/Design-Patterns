#include <StateBase.h>

class StateA : public StateBase
{
public:
    StateA(IContext *context);

    virtual void performTaskA() const override;
};
