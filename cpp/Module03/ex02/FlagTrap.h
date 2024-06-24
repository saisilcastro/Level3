#ifndef FLAGTRAP_H
#define FLAGTRAP_H

#include "ClapTrap.h"

class FlagTrap: public ClapTrap {
	public:
		FlagTrap(void);
		FlagTrap(std::string);
		FlagTrap(const FlagTrap &);
		void highFivesGuys(void);
		FlagTrap & operator = (const FlagTrap &);
		~FlagTrap(void);
};

#endif