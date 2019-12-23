#include <IFlyweightFactory.h>
#include <map>

class ConcreteFlyweightFactory : public IFlyweightFactory
{
public:
    ConcreteFlyweightFactory() = default;
    virtual IFlyweight *createSharedObject(const int &key) override;
    virtual IFlyweight *createUnsharedObject() override;

private:
    std::map<int, IFlyweight*> m_sharedFlyweightObjects;
};
