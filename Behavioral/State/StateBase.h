#pragma once

#include <IState.h>
#include <IContext.h>

class StateBase : public IState
{
public:
    StateBase(IContext* context);

    virtual void performTaskA() const override;
    virtual void performTaskB() const override;
    virtual void performTaskC() const override;
    virtual void performTaskD() const override;

protected:
    IContext *m_context;
};
