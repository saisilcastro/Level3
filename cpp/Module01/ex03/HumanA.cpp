#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) {
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack(void) const {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::~HumanA(){}