#include <IObserver.h>

class ConcreteObserverB : public IObserever
{
public:
    ConcreteObserverB(const int state);
    virtual int getState() override;
    virtual void update(ISubject *subject) override;

private:
    int m_state;
};