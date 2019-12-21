#include <Composite.h>
#include <Leaf.h>

int main()
{
    IComponent *composite = new Composite();

    for(int i = 0; i < 10; i++)
    {
        composite->add(new Leaf(i));
    }

    composite->operation();
    delete composite;

    return 0;
}
