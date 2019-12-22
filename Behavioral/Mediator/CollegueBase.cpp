#include "CollegueBase.h"

#include <iostream>

CollegueBase::CollegueBase(IMediator *mediator, const int id)
{
    m_mediator = mediator;
    m_id = id;
}

void CollegueBase::send(const std::string &message)
{
    std::cout << "Sending message from : " << m_id << std::endl;
    m_mediator->distribute(this, message);
}

void CollegueBase::recieve(const std::string &message) const
{
    std::cout << message << std::endl;
}

int CollegueBase::getId() const
{
    return m_id;
}
