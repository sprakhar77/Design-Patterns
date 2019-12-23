#include <BuilderBase.h>

class ConcreteBuilderX : public BuilderBase
{
public:
    ConcreteBuilderX() = default;

    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
};

