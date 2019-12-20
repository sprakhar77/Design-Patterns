#include "IFactory.h"

class ConcreteFactoryY : public IFactory
{
public:
    ConcreteFactoryY();

    IProdcutA* createConcreteProductA() const override;
    IProdcutB* createConcreteProductB() const override;
};

