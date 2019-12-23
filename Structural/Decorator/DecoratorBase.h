#pragma once

#include <IComponent.h>

class DecoratorBase : public IComponent
{
public:
    DecoratorBase(IComponent * component);
    virtual void performTask() const override;

private:
    IComponent *m_component;
};

