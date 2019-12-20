#include "ConcreteBuilderY.h"

void ConcreteBuilderY::buildPartA()
{
    m_product.makePartA("A-Y");
}

void ConcreteBuilderY::buildPartB()
{
    m_product.makePartB("B-Y");
}

void ConcreteBuilderY::buildPartC()
{
    m_product.makePartC("C-Y");
}
