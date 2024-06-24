#include "ClapTrap.h"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap has been created\n";
	name = "nameless";
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _name) {
	std::cout << "ClapTrap has been created\n";
	name = _name;
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & pointer) {
	std::cout << "ClapTrap has been created\n";
	*this = pointer;
}

void ClapTrap::setName(std::string _name) {
	name = _name;
}

void ClapTrap::setHitPoint(unsigned int value) {
	hit_point = value;
}

void ClapTrap::setEnergyPoint(unsigned int value) {
	energy_point = value;
}

void ClapTrap::setAttackDamage(unsigned int value) {
	attack_damage = value;
}

std::string ClapTrap::getName(void) {
	return name;
}

unsigned int ClapTrap::getHitPoint(void) {
	return hit_point;
}

unsigned int ClapTrap::getEnergyPoint(void) {
	return energy_point;
}

unsigned int ClapTrap::getAttackDamage(void) {
	return attack_damage;
}

void ClapTrap::attack(const std::string & target) {
	if (energy_point) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << std::endl;
		energy_point--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hit_point > 0) {
		std::cout << "ClapTrap " << name << " took " << amount << " point of damage!\n";
		if (amount >= hit_point) {
			std::cout << "ClapTrap " << name << " has died!\n";
			hit_point = 0;
		}
		else
			hit_point -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hit_point) {
		if (energy_point <= 0) {
			std::cout << "ClapTrap " << name << "is out of energy!\n";
			return ;
		}
		std::cout << "ClapTrap " << name << " has repaired " << amount << " point of energy!\n";
		energy_point--;
		hit_point += amount;
	}
}

ClapTrap & ClapTrap::operator=(const ClapTrap & pointer) {
	std::cout << "ClapTrap operator has been called\n";
	if (this != &pointer) {
		name = pointer.name;
		hit_point = pointer.hit_point;
		energy_point = pointer.energy_point;
		attack_damage = pointer.attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap has been destroyed\n";
}
