#include "Mediator.h"
#include <ICollegue.h>

void Mediator::add(ICollegue *collegue)
{
    m_collegues.push_back(collegue);
}

void Mediator::distribute(ICollegue *sender, const std::string &message)
{
    for (const auto collegue : m_collegues)
    {
        if (collegue->getId() != sender->getId())
        {
            collegue->recieve(message);
        }
    }
}
