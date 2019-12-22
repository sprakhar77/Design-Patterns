#include <ICareTaker.h>
#include <IOrignator.h>

#include <vector>

class ConcreteCareTaker : public ICareTaker
{
public:
    ConcreteCareTaker(IOrignator *orignator);
    virtual void save() override;
    virtual void undo() override;

private:
    IOrignator *m_orignator;
    std::vector<IMemento*> m_history;
};
