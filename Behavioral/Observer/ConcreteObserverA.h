#include <IObserver.h>

class ConcreteObserverA : public IObserever
{
public:
    ConcreteObserverA(const int state);
    virtual int  getState() override;
    virtual void update(ISubject *subject) override;

private:
    int m_state;
};