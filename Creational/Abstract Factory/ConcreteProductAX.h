#include "IProductA.h"

class ConcreteProductAX : public IProdcutA
{
public:
    ConcreteProductAX();

    void init() const override;
    void performTask() const override;
};
