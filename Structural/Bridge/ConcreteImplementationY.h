#include <IImplementor.h>

class ConcreteImplementationY : public IImplementor
{
public:
    ConcreteImplementationY() = default;

    virtual void someImplementation() const override;
};

