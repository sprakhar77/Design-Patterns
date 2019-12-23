#include <IFlyweight.h>

class UnsharedFlyweight : public IFlyweight
{
public:
    UnsharedFlyweight() = default;
    virtual void operation() const override;
};
