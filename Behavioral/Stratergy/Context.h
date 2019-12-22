#include <IContext.h>

class IStratergy;

class Context : public IContext
{
public:
    Context(IStratergy* stratergy);
    virtual void contextInterface() const override;

private:
    IStratergy * m_stratergy;
};