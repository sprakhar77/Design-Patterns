#include "IProductB.h"

class ConcreteProductBY : public IProdcutB
{
public:
    ConcreteProductBY();

    void init() const override;
    void performTask() const override;
};
