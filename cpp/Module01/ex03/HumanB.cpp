#include "HumanB.h"

HumanB::HumanB(std::string name) {
	_name = name;
	_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack(void) const {
	std::cout << _name << " attacks with their " << (_weapon ? _weapon->getType() : "none") << std::endl;
}

HumanB::~HumanB(){}