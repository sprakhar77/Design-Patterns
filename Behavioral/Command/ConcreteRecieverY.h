#include <IReciever.h>

class ConcreteRecieverY : public IReciever
{
public:
    ConcreteRecieverY() = default;
    virtual void performTask() const override;
};
