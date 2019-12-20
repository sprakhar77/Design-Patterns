#include <IBuilder.h>
#include <Product.h>

class Director
{
public:
    Director() = default;

    void setBuilder(IBuilder *builder);
    void create();
    Product get();

private:
    IBuilder *m_builder{nullptr};
};

