#pragma once

class AbstractClass
{
public:
    void templateMethod() const;
    virtual void primitiveOperationA() const = 0;
    virtual void primitiveOperationB() const = 0;
};