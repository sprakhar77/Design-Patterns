#include <BuilderBase.h>

class ConcreteBuilderY : public BuilderBase
{
public:
    ConcreteBuilderY() = default;

    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
};

