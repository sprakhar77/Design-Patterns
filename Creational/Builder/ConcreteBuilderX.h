#include <IBuilder.h>

class ConcreteBuilderX : public IBuilder
{
public:
    ConcreteBuilderX() = default;

    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
};

