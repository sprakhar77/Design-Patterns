#pragma once

class IIterator
{
public:
    virtual ~IIterator() {}
    virtual int first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual int currentItem() = 0;
};
