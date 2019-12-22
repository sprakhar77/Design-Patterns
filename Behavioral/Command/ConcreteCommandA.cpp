#include "ConcreteCommandA.h"

ConcreteCommandA::ConcreteCommandA(IReciever *reciever) : m_reciever(reciever){}

void ConcreteCommandA::execute() const
{
    if (m_reciever)
    {
        m_reciever->performTask();
    }
}
