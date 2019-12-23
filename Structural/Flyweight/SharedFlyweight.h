#include <IFlyweight.h>

class SharedFlyweight : public IFlyweight
{
public:
    SharedFlyweight(const int key);
    virtual void operation() const override;

private:
    int m_key;
};
