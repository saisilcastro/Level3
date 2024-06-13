#include "Zombie.h"

extern Zombie	*zombieHorde(int n, std::string name);

int	main(void) {
	Zombie	*fucker = zombieHorde(10, "Fucker");
	for (int i = 0; i < 10; i++)
		fucker[i].annouce();
	delete []fucker;
	return (0);
}