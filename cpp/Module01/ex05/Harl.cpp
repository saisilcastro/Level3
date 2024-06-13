#include "Harl.h"

Harl::Harl(void){}

void Harl::debug(void) {
	std::cout << "the fucking dudes are always around the debug stuff\n";
}

void Harl::info(void) {
	std::cout << "the suckers didn't make their work so good!!!\n";
}

void Harl::warning(void) {
	std::cout << "those dickers never treat it like we deserve!!!\n";
}

void Harl::error(void) {
	std::cout << "there's an issue on the communication between the fucker and dicker\n";
}

void Harl::complain(std::string level) {
	std::string function[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*call[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (function[i]== level)
			(this->*call[i])();
}

Harl::~Harl(){}