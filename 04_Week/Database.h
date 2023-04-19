#pragma once
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include <list>

class Database
{
private:
	std::list<std::unique_ptr<Animal>> animal;
public:
	std::unique_ptr<Animal> create(Animal::eType type);
	void add(std::unique_ptr<Animal>& animal);
	void displayAll(std::ostream& ostr);
};

