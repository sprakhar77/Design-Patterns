#include <ConcreteOrignator.h>

class ConcreteMemento : private IMemento
{
public:
    ConcreteMemento(const int &state);

private:
    friend class ConcreteOrignator;

    virtual int getState() const override;
    virtual void setState(const int &state) override;

private:
    int m_state;
};
