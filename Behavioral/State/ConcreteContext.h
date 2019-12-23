#include <IContext.h>
#include <IState.h>

class ConcreteContext : public IContext
{
public:
    ConcreteContext();

    virtual void actionA() override;
    virtual void actionB() override;
    virtual void actionC() override;
    virtual void actionD() override;
    virtual void setState(IState *state) override;

private:
    IState *m_currentState;
};
