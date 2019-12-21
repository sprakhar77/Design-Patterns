#include <IAbstraction.h>
#include <IImplementor.h>

class RedefinedAbstractionA : public IAbstraction
{
public:
    RedefinedAbstractionA(IImplementor *implementor);
    ~RedefinedAbstractionA();

    virtual void performTask() const override;

private:
    IImplementor *m_implementor{nullptr};
};

