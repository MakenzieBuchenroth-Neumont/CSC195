#include "Fish.h"

void Fish::read(std::ostream& ostr, std::istream& istr) {
		Animal::read(ostr, istr); // Get Animal Details

		// Get Fish Details
		ostr << "\nEnter number of fins: ";
		istr >> numFins;
		ostr << "\nEnter number of teeth: ";
		istr >> numTeeth;
	}
