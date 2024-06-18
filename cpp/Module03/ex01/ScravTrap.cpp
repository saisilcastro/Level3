#include "ScravTrap.h"

ScravTrap::ScravTrap(void) {
	ClapTrap();
	std::cout << "ScravTrap has been created\n";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScravTrap::ScravTrap(std::string _name) {
	ClapTrap(name);
	std::cout << "ScravTrap has been created\n";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScravTrap::ScravTrap(const ScravTrap & pointer) {
	std::cout << "ScravTrap has been created\n";
	*this = pointer;
}

ScravTrap::~ScravTrap(void) {
	std::cout << "ScravTrap has been destroyed\n";
}