#include <HandlerBase.h>

class ConcreteHandlerB : public HandlerBase
{
public:
    ConcreteHandlerB() = default;
    virtual bool canhandle() const override;
    virtual void handleRequest() const override;
};
