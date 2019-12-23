#include <IDirector.h>
#include <IBuilder.h>

class ConcreteDirector : public IDirector
{
public:
    ConcreteDirector() = default;

    virtual void setBuilder(IBuilder *builder) override;
    virtual void create() override;
    virtual Product get() override;

private:
    IBuilder *m_builder{nullptr};
};

