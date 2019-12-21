#include <ProxyComponent.h>

int main()
{
    IComponent *component = new ProxyComponent();
    component->performTask();
    delete component;

    return 0;
}
