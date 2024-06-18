#include <cstdlib>
#include "ClapTrap.h"

void fight_till_die(ClapTrap & fucker, ClapTrap & sucker);

int	main(void) {
	ClapTrap trap1("fucker");
	ClapTrap trap2(trap1);
	std::srand(time(NULL));
	trap1.setAttackDamage(std::rand() % 10);
	trap2.setName("sucker");
	trap2.setAttackDamage(std::rand() % 10);
	fight_till_die(trap1, trap2);
	return (0);
}

void fight_till_die(ClapTrap & fucker, ClapTrap & sucker) {
	while (fucker.getHitPoint() && sucker.getHitPoint())
	{
		fucker.attack(sucker.getName());
		sucker.takeDamage(fucker.getAttackDamage());
		sucker.beRepaired(std::rand() % 10);
		if (sucker.getHitPoint()) {
			sucker.attack(fucker.getName());
			fucker.takeDamage(sucker.getAttackDamage());
			fucker.beRepaired(std::rand() % 10);
		}
	}
}