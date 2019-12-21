#include <ConcreteComponent.h>
#include <ConcreteDecoratorA.h>
#include <ConcreteDecoratorB.h>

int main()
{
    IComponent *component = new ConcreteComponent();

    component = new ConcreteDecoratorA(component);
    component = new ConcreteDecoratorB(component);

    component->performTask();
    delete component;

    return 0;
}
