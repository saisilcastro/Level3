#include <cmath>
#include "Zombie.h"

std::string	itoa(int number) {
	std::string snumber = "";
	int	tenth = number;
	int	len  = 0;

	while (tenth) {
		tenth /= 10;
		len++;
	}
	for (int i = len; i; i--)
		snumber += (number % (int)pow(10, i) / (int)pow(10, i - 1)) + 0x30;
	return snumber;
}

Zombie	*zombieHorde(int n, std::string name) {
	Zombie	*horde = new Zombie[n];

	for (int i = 0; i < n; i++)
		horde[i].setName(name + " " + itoa(i + 1));
	return horde;
}