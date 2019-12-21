#include <IComponent.h>
#include <vector>

class Composite : public IComponent
{
public:
    Composite() = default;
    ~Composite();

    virtual void add(IComponent *component) override;
    virtual IComponent *getChild(const int &index) override;
    virtual void operation() const override;

private:
    std::vector<IComponent*> m_children;
};

