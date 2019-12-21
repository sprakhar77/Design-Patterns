#include "IAdaptee.h"
#include "TargetAdapter.h"

int main()
{
    ITarget *targetAdapter = new TargetAdapter();
    targetAdapter->performTask();

    return 0;
}
