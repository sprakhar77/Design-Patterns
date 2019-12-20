#include "IFactory.h"

class ConcreteFactoryX : public IFactory
{
public:
    ConcreteFactoryX();

    IProdcutA* createConcreteProductA() const override;
    IProdcutB* createConcreteProductB() const override;
};

