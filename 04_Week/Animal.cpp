#include "Animal.h"


string Animal::getTypeStr() {
	switch (this->getType()) {
	case eType::Bird:
		return "Bird";
		break;
	case eType::Fish:
		return "Fish";
		break;
	}

	return "wut";
}

void Animal::read(std::ostream& ostr, std::istream& istr) {
	ostr << "\nEnter animal name: ";
	istr >> this->name;
	ostr << "\nEnter animal lifespan: ";
	istr >> this->lifespan;
}

void Animal::write(std::ostream& ostr) {
	ostr << "\n----------------";
	ostr << "\nName: " << this->name;
	ostr << "\nType: " << this->getTypeStr();
	ostr << "\nLifespan: " << this->lifespan;
}

void Animal::read(std::ifstream& ifstr) {
	ifstr >> this->name;
	ifstr >> this->lifespan;
}

void Animal::write(std::ofstream& ofstr) {
	ofstr << (int)this->getType() << std::endl; // Must be first record
	ofstr << this->name << std::endl;
	ofstr << this->lifespan << std::endl;
}