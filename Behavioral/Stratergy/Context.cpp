#include "Context.h"
#include <IStratergy.h>

Context::Context(IStratergy *stratergy)
{
    m_stratergy = stratergy;
}

void Context::contextInterface() const
{
    m_stratergy->algorithmInterface();
}
