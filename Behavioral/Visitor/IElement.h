#pragma once

class IElementVisitor;

class IElement
{
public:
    virtual void accept(const IElementVisitor &visitor) = 0;
};
