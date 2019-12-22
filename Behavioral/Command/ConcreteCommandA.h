#include <ICommand.h>
#include <IReciever.h>

class ConcreteCommandA : public ICommand
{
public:
    ConcreteCommandA(IReciever * reciever);
    virtual void execute() const override;

private:
    IReciever *m_reciever;
};