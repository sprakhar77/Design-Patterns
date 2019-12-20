#include "Singleton.h"

int main()
{
    Singleton* singleton = Singleton::getInstance();
    singleton->performTask();
    singleton->reset();
    singleton = Singleton::getInstance();
    singleton->performTask();

    return 0;
}
