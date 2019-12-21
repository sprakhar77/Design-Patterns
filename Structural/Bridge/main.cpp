#include <RedefinedAbstractionA.h>
#include <RedefinedAbstractionB.h>
#include <ConcreteImplementationX.h>
#include <ConcreteImplementationY.h>

int main()
{
    // A-X
    IAbstraction *AX = new RedefinedAbstractionA(new ConcreteImplementationX);
    AX->performTask();

    // B-X
    IAbstraction *BX = new RedefinedAbstractionB(new ConcreteImplementationX);
    BX->performTask();

    // A-Y
    IAbstraction *AY = new RedefinedAbstractionA(new ConcreteImplementationY);
    AY->performTask();

    // B-Y
    IAbstraction *BY = new RedefinedAbstractionB(new ConcreteImplementationY);
    BY->performTask();

    return 0;
}
