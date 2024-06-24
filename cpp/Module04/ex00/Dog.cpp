#include "Dog.h"

Dog::Dog(void) {
	std::cout << "Dog has been created\n";
	type = "Dog";
}

Dog::Dog(std::string _type) {
	std::cout << "Dog has been created\n";
	type = _type;
}

Dog::Dog(Dog const & pointer) {
	std::cout << "Dog has been created\n";
	*this = pointer;
}

void Dog::makeSound(void) const {
	std::cout << "Au Au!\n";
}

Dog & Dog::operator = (Dog const & pointer) {
	std::cout << "Dog operator has been called\n";
	if (this != &pointer)
		type = pointer.type;
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog has been destroyed\n";
}