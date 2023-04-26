#include "Database.h"

std::unique_ptr<Animal> Database::create(Animal::eType type) {
	Animal* animal = nullptr;

	switch (type) {
	case Animal::eType::Bird:
		animal = new Bird;
		break;
	case Animal::eType::Fish:
		animal = new Fish;
		break;
	}
	return std::unique_ptr<Animal>{animal};
}

void Database::add(std::unique_ptr<Animal>& animal) {
	this->animal.push_back(std::move(animal));
	cout << "\n ***** List size = " << this->animal.size();
}
void Database::displayAll(std::ostream& ostr) {
	for (std::unique_ptr<Animal>& animal : this->animal) {
		animal->write(ostr);
	}
}

void Database::getByName(std::ostream& ostr, istream& istr, string sInput) {
	for (std::unique_ptr<Animal>& animal : this->animal) {
		if (animal->name.compare(sInput) == 0) {
			animal->write(ostr);
		}
	}
}

void Database::sortByType(std::ostream& ostr, istream& istr) {
	
}

void Database::save(const string filename) {
	// open file
	std::ofstream output(filename, std::ofstream::out | std::ofstream::app); // Bitwise OR

	if (output.is_open()) {
		for (std::unique_ptr<Animal>& animal : this->animal) {
			animal->write(output);
		}
	}

	if (output.is_open()) {
		output.close();
	}
}

void Database::load(const string& filename) {
	std::ofstream output(filename);

	this->removeAll();

	if (output.is_open()) {
		for (std::unique_ptr<Animal>& animal : this->animal) {
			//animal->write(output);
		}
	}

	if (output.is_open()) {
		output.close();
	}
}
