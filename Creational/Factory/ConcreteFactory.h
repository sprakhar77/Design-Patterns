#include "IFactory.h"

class ConcreteFactory : public IFactory
{
public:
    ConcreteFactory();

    IProduct* createConcreteProductA() const override;
    IProduct* createConcreteProductB() const override;
};

