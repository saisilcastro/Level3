#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA {
	public:
		HumanA(std::string name, Weapon &type);
		void	attack(void) const;
		~HumanA();
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif // HUMANA_H