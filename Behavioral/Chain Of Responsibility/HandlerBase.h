#pragma once

#include <IHandler.h>

class HandlerBase : public IHandler
{
public:
    HandlerBase() = default;

    virtual void setHandler(IHandler * handler) override;
    virtual bool canhandle() const override;
    virtual void handleRequest() const override;

private:
    IHandler *m_successor;
};