#include "Zombie.h"

Zombie	*newZombie(std::string name) {
	return (new Zombie(name));
}

void	ramdomChump(std::string name) {
	Zombie	bad(name);
	bad.annouce();
}

int	main(void) {
	Zombie	*fucker = newZombie("Fucker");
	fucker->annouce();
	ramdomChump("Sucker");
	delete fucker;
	return (0);
}