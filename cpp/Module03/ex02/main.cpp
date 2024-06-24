#include <cstdlib>
#include "FlagTrap.h"

void fight_till_die(FlagTrap & fucker, FlagTrap & sucker);

int	main(void) {
	FlagTrap scrav1("fucker");
	FlagTrap scrav2(scrav1);
	scrav2.setName("sucker");
	fight_till_die(scrav1, scrav2);
	return (0);
}

void fight_till_die(FlagTrap & fucker, FlagTrap & sucker) {
	bool damaged;
	srand(time(NULL));
	while (fucker.getHitPoint() && sucker.getHitPoint()) {
		fucker.attack(sucker.getName());
		damaged = rand() % 2;
		if (damaged) {
			sucker.takeDamage(fucker.getAttackDamage());
			sucker.beRepaired(std::rand() % 10);
		}
		else
			sucker.highFivesGuys();
		sucker.attack(fucker.getName());
		damaged = rand() % 2;
		if (damaged) {
			fucker.takeDamage(sucker.getAttackDamage());
			fucker.beRepaired(std::rand() % 10);
		}
		else
			fucker.highFivesGuys();
	}
}