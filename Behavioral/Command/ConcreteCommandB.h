#include <ICommand.h>
#include <IReciever.h>

class ConcreteCommandB : public ICommand
{
public:
    ConcreteCommandB(IReciever * reciever);
    virtual void execute() const override;

private:
    IReciever *m_reciever;
};