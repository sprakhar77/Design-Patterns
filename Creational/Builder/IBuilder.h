#pragma once

#include <Product.h>

class IBuilder
{
public:
    virtual ~IBuilder() = default;

    Product get() const {return m_product;}

    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual void buildPartC() = 0;

protected:
    Product m_product;
};
