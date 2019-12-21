#include <IAbstraction.h>
#include <IImplementor.h>

class RedefinedAbstractionB : public IAbstraction
{
public:
    RedefinedAbstractionB(IImplementor *implementor);
    ~RedefinedAbstractionB();

    virtual void performTask() const override;

private:
    IImplementor *m_implementor{nullptr};
};

