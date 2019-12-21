#include <IImplementor.h>

class ConcreteImplementationX : public IImplementor
{
public:
    ConcreteImplementationX() = default;

    virtual void someImplementation() const override;
};

