#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl{
	public:
	Harl(void);
	void complain(std::string level);
	~Harl();
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif