#pragma once

class IComponent
{
public:
    virtual ~IComponent() {}

    virtual void add(IComponent*){}
    virtual IComponent *getChild(const int &) {return nullptr;}
    virtual void operation() const = 0;
};
