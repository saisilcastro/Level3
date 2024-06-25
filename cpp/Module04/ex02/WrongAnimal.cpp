#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal has been created\n";
	type = "human";
}

WrongAnimal::WrongAnimal(std::string _type) {
	std::cout << "WrongAnimal has been created\n";
	type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal & pointer) {
	std::cout << "WrongAnimal has been created\n";
	*this = pointer;
}

std::string WrongAnimal::getType(void) const {
	return type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Aaaaaaaaaiiiiiiiii paiiiiiiii para!\n";
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal & pointer) {
	std::cout << "WrongAnimal operator has been called\n";
	if (this != &pointer)
		type = pointer.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal has been destroyed\n";
}