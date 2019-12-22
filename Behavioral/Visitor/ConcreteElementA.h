#include <IElement.h>

class ConcreteElementA : public IElement
{
public:
    ConcreteElementA() = default;
    void someInformationA() const;
    virtual void accept(const IElementVisitor &visitor) override;
};