#pragma once

#include <Product.h>

class IBuilder
{
public:
    virtual ~IBuilder() = default;

    virtual Product get() const = 0;
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual void buildPartC() = 0;
};
