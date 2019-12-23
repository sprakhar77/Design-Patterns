#include "ConcreteCollegue.h"

#include <iostream>

ConcreteCollegue::ConcreteCollegue(IMediator *mediator, const int id)
{
    m_mediator = mediator;
    m_id = id;
}

void ConcreteCollegue::send(const std::string &message)
{
    std::cout << "Sending message from : " << m_id << std::endl;
    m_mediator->distribute(this, message);
}

void ConcreteCollegue::recieve(const std::string &message) const
{
    std::cout << message << std::endl;
}

int ConcreteCollegue::getId() const
{
    return m_id;
}
