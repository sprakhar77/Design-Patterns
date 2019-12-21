#include <IAdaptee.h>

class Adaptee : public IAdaptee
{
public:
    Adaptee() = default;

    virtual void performSomeTaskDiffrently() const override;
};

