#include "Zombie.h"

Zombie::Zombie(std::string _name) {
	name = _name;
}

void	Zombie::annouce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << name << " has been killed" << std::endl;
}