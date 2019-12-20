#include "IProductB.h"

class ConcreteProductBX : public IProdcutB
{
public:
    ConcreteProductBX();

    void init() const override;
    void performTask() const override;
};
