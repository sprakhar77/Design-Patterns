#include "Singleton.h"

#include <iostream>

std::atomic<Singleton *>Singleton::instance {nullptr};
std::mutex Singleton::mutex;

Singleton *Singleton::getInstance()
{
    if(!instance)
    {
        std::lock_guard<std::mutex> lock(mutex);
        if (!instance)
        {
            instance = new Singleton();
        }
    }
    return instance;
}

void Singleton::performTask() const
{
    std::cout << "Performing some task" << std::endl;
}

void Singleton::reset()
{
    Singleton *value = instance.load();
    delete value;
    instance = nullptr;
}

