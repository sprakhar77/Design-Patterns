#pragma once

#include <Product.h>
#include <IBuilder.h>

class IDirector
{
public:
    virtual void setBuilder(IBuilder *builder) = 0;
    virtual void create() = 0;
    virtual Product get() = 0;
};
