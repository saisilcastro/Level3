#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Animal type " << j->getType() << std::endl;
	std::cout << "Animal type " << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	const WrongAnimal *fucker = new WrongAnimal();
	const WrongAnimal *mu = new WrongCat();
	std::cout << "Animal type " << mu->getType() << std::endl;
	mu->makeSound();
	fucker->makeSound();

	delete fucker;
	delete mu;
	return (0);
}