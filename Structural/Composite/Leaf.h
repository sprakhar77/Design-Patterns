#include <IComponent.h>

class Leaf : public IComponent
{
public:
    Leaf(const int & id);

    virtual void operation() const override;

private:
    int m_id;
};

