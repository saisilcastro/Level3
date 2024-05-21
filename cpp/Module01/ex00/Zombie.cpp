#include "Zombie.h"

Zombie::Zombie(std::string name) {
	_name = name;
}

void	Zombie::annouce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << _name << " has been killed" << std::endl;
}