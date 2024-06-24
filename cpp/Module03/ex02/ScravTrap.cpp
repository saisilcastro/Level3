#include "ScravTrap.h"

ScravTrap::ScravTrap(void) {
	ClapTrap();
	std::cout << "ScravTrap has been created\n";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScravTrap::ScravTrap(std::string _name) {
	setName(_name);
	std::cout << "ScravTrap has been created\n";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScravTrap::ScravTrap(const ScravTrap & pointer) {
	std::cout << "ScravTrap has been created\n";
	*this = pointer;
}

void ScravTrap::guardGate(void) {
	std::cout << "ScravTrap " << getName() << " has been activated guardGate Mode\n";
}

ScravTrap & ScravTrap::operator = (const ScravTrap & pointer) {
	std::cout << "ScravTrap operator has been called\n";
	if (this != &pointer) {
		name = pointer.name;
		hit_point = pointer.hit_point;
		energy_point = pointer.energy_point;
		attack_damage = pointer.attack_damage;
	}
	return *this;
}

ScravTrap::~ScravTrap(void) {
	std::cout << "ScravTrap has been destroyed\n";
}