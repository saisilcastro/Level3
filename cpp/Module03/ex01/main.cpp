#include <cstdlib>
#include "ScravTrap.h"

void fight_till_die(ScravTrap & fucker, ScravTrap & sucker);

int	main(void) {
	ScravTrap scrav1("fucker");
	ScravTrap scrav2(scrav1);
	fight_till_die(scrav1, scrav2);
	return (0);
}

void fight_till_die(ScravTrap & fucker, ScravTrap & sucker) {
	srand(time(NULL));
	while (fucker.getHitPoint() && sucker.getHitPoint()) {
		fucker.attack(sucker.getName());
		sucker.takeDamage(fucker.getAttackDamage());
		sucker.beRepaired(std::rand() % 10);
		sucker.attack(fucker.getName());
		fucker.takeDamage(sucker.getAttackDamage());
		fucker.beRepaired(std::rand() % 10);
	}
}