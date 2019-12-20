#include "IProduct.h"

class ConcreteProductB : public IProduct
{
public:
    ConcreteProductB();

    void init() const override;
    void performTask() const override;
};

