#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		void	annouce(void);
		~Zombie();
	private:
	std::string _name;
};

#endif // ZOMBIE_H