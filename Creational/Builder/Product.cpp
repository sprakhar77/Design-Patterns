#include "Product.h"

void Product::makePartA(const std::string &partA)
{
    m_partA = partA;
}

void Product::makePartB(const std::string &partB)
{
    m_partB = partB;
}

void Product::makePartC(const std::string &partC)
{
    m_partC = partC;
}

std::string Product::allParts() const
{
    return m_partA + " " +  m_partB + " "+  m_partC;
}
