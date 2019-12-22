#include <IAggregate.h>

class ConcreteAggregate : public IAggregate
{
public:
    ConcreteAggregate(const int size);
    ~ConcreteAggregate();

    int at(const int index);
    int size();

    virtual IIterator *createIterator() override;

private:
    int m_size;
    int *m_list;
};