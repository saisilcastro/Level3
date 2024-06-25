#include "WrongCat.h"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat has been created\n";
	type = "WrongCat";
}

WrongCat::WrongCat(std::string _type) {
	std::cout << "WrongCat has been created\n";
	type = _type;
}

WrongCat::WrongCat(WrongCat const & pointer) {
	std::cout << "WrongCat has been created\n";
	*this = pointer;
}

void WrongCat::makeSound(void) const {
	std::cout << "Muuau!\n";
}

WrongCat & WrongCat::operator = (WrongCat const & pointer) {
	std::cout << "WrongCat operator has been called\n";
	if (this != &pointer)
		type = pointer.type;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat has been destroyed\n";
}