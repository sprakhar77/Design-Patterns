#include <ConcreteFacade.h>

int main()
{
    IFacade *facade = new ConcreteFacade();
    facade->operationX();
    facade->operationY();

    delete facade;

    return 0;
}
