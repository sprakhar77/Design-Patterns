#include <ConcreteClassX.h>
#include <ConcreteClassY.h>

int main()
{
    AbstractClass *concreteClassX = new ConcreteClassX();
    concreteClassX->templateMethod();

    AbstractClass *concreteClassY = new ConcreteClassY();
    concreteClassY->templateMethod();

    return 0;
}
