#include "Invoker.h"


void Invoker::setCommand(ICommand *command)
{
    m_command = command;
}

void Invoker::confirm()
{
    if (m_command)
    {
        m_command->execute();
    }
}
