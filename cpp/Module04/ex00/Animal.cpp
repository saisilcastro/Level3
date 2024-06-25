#include "Animal.h"

Animal::Animal(void) {
	std::cout << "Animal has been created\n";
	type = "human";
}

Animal::Animal(std::string _type) {
	std::cout << "Animal has been created\n";
	type = _type;
}

Animal::Animal(const Animal & pointer) {
	std::cout << "Animal has been created\n";
	*this = pointer;
}

std::string Animal::getType(void) const {
	return type;
}

void Animal::makeSound(void) const {
	std::cout << "Aaaaaaaaaiiiiiiiii ze da manga!\n";
}

Animal & Animal::operator = (Animal const & pointer) {
	std::cout << "Animal operator has been called\n";
	if (this != &pointer)
		type = pointer.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal has been destroyed\n";
}