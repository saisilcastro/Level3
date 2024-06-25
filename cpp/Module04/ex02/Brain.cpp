#include "Brain.h"

Brain::Brain(void) {
	std::cout << "Brain has been created\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = "brainless";
}

Brain::Brain(Brain const & pointer) {
	std::cout << "Brain has been created\n";
	*this = pointer;
}

void Brain::setIdea(std::string value, int pos) {
	if (pos >= 0 && pos < 100)
		ideas[pos] = value;
}

std::string Brain::getIdea(int pos) {
	return pos >= 0 && pos < 100 ? ideas[pos] : "brainless";
}

Brain & Brain::operator = (Brain const & pointer) {
	std::cout << "Brain operator has been called\n";
	if (this != &pointer)
		for (int i = 0; i < 100; i++)
			ideas[i] = pointer.ideas[i];
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain has been destroyed\n";
}