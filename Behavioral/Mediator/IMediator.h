#pragma once

#include <string>

class ICollegue;

class IMediator
{
public:
    virtual void add(ICollegue *collegue) = 0;
    virtual void distribute(ICollegue *sender, const std::string& message) = 0;
};
