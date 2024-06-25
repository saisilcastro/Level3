#include "Cat.h"

Cat::Cat(void) {
	std::cout << "Cat has been created\n";
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(std::string _type) {
	std::cout << "Cat has been created\n";
	type = _type;
	brain = new Brain();
}

Cat::Cat(Cat const & pointer) {
	std::cout << "Cat has been created\n";
	*this = pointer;
}

void Cat::makeSound(void) const {
	std::cout << "Miau!\n";
}

Brain *Cat::getBrain(void) const {
	return brain;
}

Cat & Cat::operator = (Cat const & pointer) {
	std::cout << "Cat operator has been called\n";
	if (this != &pointer) {
		type = pointer.type;
		*brain = *(pointer.brain);
	}
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat has been destroyed\n";
	delete brain;
}