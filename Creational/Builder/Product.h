#pragma once

#include <string>

class Product
{
public:
    Product() = default;

    void makePartA(const std::string& partA);
    void makePartB(const std::string& partB);
    void makePartC(const std::string& partC);
    std::string allParts() const;

private:
    std::string m_partA;
    std::string m_partB;
    std::string m_partC;
};

