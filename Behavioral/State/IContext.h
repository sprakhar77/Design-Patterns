#pragma once

#include <IState.h>

class IContext
{
public:
    virtual void actionA() = 0;
    virtual void actionB() = 0;
    virtual void actionC() = 0;
    virtual void actionD() = 0;
    virtual void setState(IState *state) = 0;
};
