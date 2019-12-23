#include <StateBase.h>

class StateD : public StateBase
{
public:
    StateD(IContext *context);

    virtual void performTaskB() const override;
    virtual void performTaskD() const override;
};
