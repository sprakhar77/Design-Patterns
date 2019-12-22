#include <IIterator.h>

class ConcreteAggregate;

class ConcreteIterator : public IIterator
{
public:
    ConcreteIterator(ConcreteAggregate * aggregator);
    virtual int first() override;
    virtual void next() override;
    virtual bool isDone() override;
    virtual int currentItem() override;

private:
    int m_index;
    ConcreteAggregate * m_concreteAggregate;
};
