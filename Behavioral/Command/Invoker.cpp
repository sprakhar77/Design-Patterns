#include "Invoker.h"


void ConcreteInvoker::setCommand(ICommand *command)
{
    m_command = command;
}

void ConcreteInvoker::confirm()
{
    if (m_command)
    {
        m_command->execute();
    }
}
