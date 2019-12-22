#pragma once

#include <string>

class IMediator;

class ICollegue
{
public:
    virtual void send(const std::string &message) = 0;
    virtual void recieve(const std::string &message) const = 0;
    virtual int getId() const = 0;
};
