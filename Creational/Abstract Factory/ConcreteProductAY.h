#include "IProductA.h"

class ConcreteProductAY : public IProdcutA
{
public:
    ConcreteProductAY();

    void init() const override;
    void performTask() const override;
};
