#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(std::string);
		Cat(Cat const &);
		void makeSound(void) const;
		Cat & operator = (Cat const &);
		~Cat(void);
};

#endif