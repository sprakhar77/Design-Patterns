#include <IBuilder.h>

class ConcreteBuilderY : public IBuilder
{
public:
    ConcreteBuilderY() = default;

    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
};

