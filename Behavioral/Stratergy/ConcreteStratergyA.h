#include <IStratergy.h>

class ConcreteStratergyA : public IStratergy
{
public:
    ConcreteStratergyA() = default;
    virtual void algorithmInterface() const override;
};