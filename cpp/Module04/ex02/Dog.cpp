#include "Dog.h"

Dog::Dog(void) {
	std::cout << "Dog has been created\n";
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(std::string _type) {
	std::cout << "Dog has been created\n";
	type = _type;
	brain = new Brain();
}

Dog::Dog(Dog const & pointer) {
	std::cout << "Dog has been created\n";
	*this = pointer;
}

void Dog::makeSound(void) const {
	std::cout << "Au Au!\n";
}

Brain *Dog::getBrain(void) const {
	return brain;
}

Dog & Dog::operator = (Dog const & pointer) {
	std::cout << "Dog operator has been called\n";
	if (this != &pointer) {
		type = pointer.type;
		*brain = *(pointer.brain);
	}
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog has been destroyed\n";
	delete brain;
}