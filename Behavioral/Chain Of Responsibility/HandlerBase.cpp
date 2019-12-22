#include "HandlerBase.h"

void HandlerBase::setHandler(IHandler *handler)
{
    m_successor = handler;
}

bool HandlerBase::canhandle() const
{
    return false;
}

void HandlerBase::handleRequest() const
{
    if (m_successor)
    {
        m_successor->handleRequest();
    }
}
