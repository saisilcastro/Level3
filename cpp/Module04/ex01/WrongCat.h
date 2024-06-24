#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(std::string);
		WrongCat(WrongCat const &);
		void makeSound(void) const;
		WrongCat & operator = (WrongCat const &);
		~WrongCat(void);
};

#endif