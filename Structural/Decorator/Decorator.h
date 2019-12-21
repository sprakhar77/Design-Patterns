#pragma once

#include <IComponent.h>

class Decorator : public IComponent
{
public:
    Decorator(IComponent * component);
    virtual void performTask() const override;

private:
    IComponent *m_component;
};

