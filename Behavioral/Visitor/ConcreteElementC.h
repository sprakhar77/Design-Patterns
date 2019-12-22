#include <IElement.h>

class ConcreteElementC : public IElement
{
public:
    ConcreteElementC() = default;
    void someInformationC() const;
    virtual void accept(const IElementVisitor &visitor) override;
};