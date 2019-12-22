#pragma once

#include <IOrignator.h>
#include <IMemento.h>

class ConcreteOrignator : public IOrignator
{
public:
    ConcreteOrignator() = default;
    virtual int getState() const override;
    virtual void setState(const int &state) override;
    virtual void setMemento(const IMemento &memento) override;
    virtual IMemento *createMemento() override;

private:
    int m_state;
};
