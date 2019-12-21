#include "TargetAdapter.h"
# include "Adaptee.h"

#include <iostream>

TargetAdapter::TargetAdapter()
{
    m_adaptee = new Adaptee();
}
TargetAdapter::~TargetAdapter()
{
	delete m_adaptee;
}

void TargetAdapter::performTask() const
{
    if (!m_adaptee)
    {
        std::cout << "Error" << std::endl;
        return;
    }

    m_adaptee->performSomeTaskDiffrently();
}
