#include "ConcreteCommandB.h"

ConcreteCommandB::ConcreteCommandB(IReciever *reciever) : m_reciever(reciever){}

void ConcreteCommandB::execute() const
{
    if (m_reciever)
    {
        m_reciever->performTask();
    }
}
