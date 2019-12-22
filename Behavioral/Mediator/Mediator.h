#include <IMediator.h>

#include <vector>

class Mediator : public IMediator
{
public:
    Mediator() = default;
    virtual void add(ICollegue *collegue) override;
    virtual void distribute(ICollegue *sender, const std::string& message) override;

private:
    std::vector <ICollegue*> m_collegues;
};
