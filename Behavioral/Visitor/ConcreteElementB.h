#include <IElement.h>

class ConcreteElementB : public IElement
{
public:
    ConcreteElementB() = default;
    void someInformationB() const;
    virtual void accept(const IElementVisitor &visitor) override;
};