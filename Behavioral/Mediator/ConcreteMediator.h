#include <IMediator.h>

#include <vector>

class ConcreteMediator : public IMediator
{
public:
    ConcreteMediator() = default;
    virtual void add(ICollegue *collegue) override;
    virtual void distribute(ICollegue *sender, const std::string& message) override;

private:
    std::vector <ICollegue*> m_collegues;
};
