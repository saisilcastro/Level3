#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string);
		void setName(std::string);
		void	annouce(void);
		~Zombie();
	private:
	std::string name;
};

#endif // ZOMBIE_H