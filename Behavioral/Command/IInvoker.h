#pragma once

#include <ICommand.h>

class IInvoker
{
public:
    virtual void setCommand(ICommand *command) = 0;
    virtual void confirm() = 0;
};
