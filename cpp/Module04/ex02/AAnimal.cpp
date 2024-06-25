#include "AAnimal.h"

AAnimal::AAnimal(void) {
	std::cout << "Animal has been created\n";
	type = "human";
}

AAnimal::AAnimal(std::string _type) {
	std::cout << "AAnimal has been created\n";
	type = _type;
}

AAnimal::AAnimal(const AAnimal & pointer) {
	std::cout << "AAnimal has been created\n";
	*this = pointer;
}

std::string AAnimal::getType(void) const {
	return type;
}

void AAnimal::makeSound(void) const {
	std::cout << "Aaaaaaaaaiiiiiiiii ze da manga!\n";
}

AAnimal & AAnimal::operator = (AAnimal const & pointer) {
	std::cout << "AAnimal operator has been called\n";
	if (this != &pointer)
		type = pointer.type;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal has been destroyed\n";
}