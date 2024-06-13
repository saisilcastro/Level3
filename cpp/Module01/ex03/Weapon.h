#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {
	public:
		Weapon(){};
		Weapon(std::string type);
		void	setType(std::string type);
		const std::string&	getType(void);
		~Weapon();
	private:
		std::string _type;
};

#endif // WEAPON_H