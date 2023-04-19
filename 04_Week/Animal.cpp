#include "Animal.h"

void Animal::read(std::ostream& ostr, std::istream& istr) {
	ostr << "\nEnter animal name: ";
	istr >> this->name;
	ostr << "\nEnter animal lifespan: ";
	istr >> this->lifespan;
}