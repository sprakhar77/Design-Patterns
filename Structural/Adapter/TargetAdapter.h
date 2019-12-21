#include <IAdaptee.h>
#include <ITarget.h>

class TargetAdapter : public ITarget
{
public:
    TargetAdapter();
    ~TargetAdapter();

    virtual void performTask() const override;

private:
    IAdaptee *m_adaptee;
};
