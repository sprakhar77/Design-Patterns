#include <ICommand.h>

class Invoker
{
public:
    Invoker() = default;

    void setCommand(ICommand *command);
    void confirm();

private:
    ICommand *m_command;
};