#include <IInvoker.h>

class ConcreteInvoker : public IInvoker
{
public:
    ConcreteInvoker() = default;

    void setCommand(ICommand *command) override;
    void confirm() override;

private:
    ICommand *m_command;
};