#include "ConcreteMediator.h"
#include <ICollegue.h>

void ConcreteMediator::add(ICollegue *collegue)
{
    m_collegues.push_back(collegue);
}

void ConcreteMediator::distribute(ICollegue *sender, const std::string &message)
{
    for (const auto collegue : m_collegues)
    {
        if (collegue->getId() != sender->getId())
        {
            collegue->recieve(message);
        }
    }
}
