#pragma once
#include "Animal.h"
#include <iostream>
using namespace std;
class Fish : public Animal
{
public:
    eType getType() override { return eType::Fish; }
    void read(std::ostream& ostr, std::istream& istr) override;

protected:
    int numFins = 0;
    int numTeeth = 0;
    string habitat = "";
};

