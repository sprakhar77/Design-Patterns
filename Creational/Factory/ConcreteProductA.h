#include "IProduct.h"

class ConcreteProductA : public IProduct
{
public:
    ConcreteProductA();

    void init() const override;
    void performTask() const override;
};
