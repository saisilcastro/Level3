#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap & pointer);
		void setName(std::string _name);
		void setHitPoint(unsigned int value);
		void setEnergyPoint(unsigned int value);
		void setAttackDamage(unsigned int value);
		std::string getName(void);
		unsigned int getHitPoint(void);
		unsigned int getEnergyPoint(void);
		unsigned int getAttackDamage(void);
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap & operator=(const ClapTrap & pointer);
	~ClapTrap(void);
	protected:
		std::string name;
		unsigned int hit_point;
		unsigned int energy_point;
		unsigned int attack_damage;
};

#endif