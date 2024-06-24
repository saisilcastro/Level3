#ifndef SCRAVTRAP_H
#define SCRAVTRAP_H

#include "ClapTrap.h"

class ScravTrap : public ClapTrap {
	public:
	ScravTrap(void);
	ScravTrap(std::string name);
	ScravTrap(const ScravTrap & pointer);
	void guardGate(void);
	ScravTrap & operator = (const ScravTrap &);
	~ScravTrap(void);
};

#endif