#include <HandlerBase.h>

class ConcreteHandlerA : public HandlerBase
{
public:
    ConcreteHandlerA() = default;
    virtual bool canhandle() const override;
    virtual void handleRequest() const override;
};
