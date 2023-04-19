#include "Bird.h"

void Bird::read(std::ostream& ostr, std::istream& istr) {
	Animal::read(ostr, istr); // Get Animal Details

	// Get Bird Details
	ostr << "\nEnter wingspan: ";
	istr >> wingspan;
	ostr << "\nEnter number of eggs: ";
	istr >> numEggs;
}