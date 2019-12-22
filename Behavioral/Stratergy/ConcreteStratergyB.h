#include <IStratergy.h>

class ConcreteStratergyB : public IStratergy
{
public:
    ConcreteStratergyB() = default;
    virtual void algorithmInterface() const override;
};