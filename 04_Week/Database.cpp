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
void displayAll(std::ostream& ostr) {

}
