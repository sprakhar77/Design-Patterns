#include <StateBase.h>

class StateB : public StateBase
{
public:
    StateB(IContext *context);

    virtual void performTaskB() const override;
};
