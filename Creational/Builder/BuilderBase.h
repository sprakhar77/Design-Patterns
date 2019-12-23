#pragma once

#include <IBuilder.h>

class BuilderBase : public IBuilder
{
public:
    BuilderBase() = default;
    virtual Product get() const override;

protected:
    Product m_product;
};

