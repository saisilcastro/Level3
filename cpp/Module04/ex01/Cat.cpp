#include "Cat.h"

Cat::Cat(void) {
	std::cout << "Cat has been created\n";
	type = "Cat";
}

Cat::Cat(std::string _type) {
	std::cout << "Cat has been created\n";
	type = _type;
}

Cat::Cat(Cat const & pointer) {
	std::cout << "Cat has been created\n";
	*this = pointer;
}

void Cat::makeSound(void) const {
	std::cout << "Miau!\n";
}

Cat & Cat::operator = (Cat const & pointer) {
	std::cout << "Cat operator has been called\n";
	if (this != &pointer)
		type = pointer.type;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat has been destroyed\n";
}