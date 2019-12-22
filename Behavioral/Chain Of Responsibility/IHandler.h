#pragma once

class IHandler
{
public:

    virtual bool canhandle() const = 0;
    virtual void setHandler(IHandler* handler) = 0;
    virtual void handleRequest() const = 0;
};
