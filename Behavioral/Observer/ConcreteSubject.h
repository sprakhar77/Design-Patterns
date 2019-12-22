#include <ISubject.h>
#include <IObserver.h>

#include <vector>

class ConcreteSubject : public ISubject
{
public:
    ConcreteSubject() = default;
    void add(IObserever *observer) override;
    void notify() override;
    int getState() override;
    void setState(const int state) override;

private:
    int m_state;
    std::vector<IObserever*> m_observers;
};
