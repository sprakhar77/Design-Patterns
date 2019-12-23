#include <HandlerBase.h>

class ConcreteHandlerA : public HandlerBase
{
public:
    ConcreteHandlerA() = default;
    virtual void handleRequest() const override;
};
