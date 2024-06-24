#include "FlagTrap.h"

FlagTrap::FlagTrap(void) {
	std::cout << "FlagTrap has been created\n";
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FlagTrap::FlagTrap(std::string _name) {
	std::cout << "FlagTrap has been created\n";
	name = _name;
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FlagTrap::FlagTrap(const FlagTrap & pointer) {
	std::cout << "FlagTrap has been created\n";
	*this = pointer;
}

void FlagTrap::highFivesGuys(void) {
	std::cout << getName() << " gaves you a highFives Guys\n";
}

FlagTrap & FlagTrap::operator = (const FlagTrap & pointer) {
	std::cout << "FlagTrap operator has been called\n";
	if (this != &pointer) {
		name = pointer.name;
		hit_point = pointer.hit_point;
		energy_point = pointer.energy_point;
		attack_damage = pointer.attack_damage;
	}
	return *this;
}

FlagTrap::~FlagTrap(void) {
	std::cout << "FlagTrap has been destroyed\n";
}