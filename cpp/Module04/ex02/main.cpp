#include "Cat.h"
#include "Dog.h"
#include <cstdio>

int main(void) {
	const AAnimal* dog[5];
	const AAnimal* cat[5];

	for (int i = 0; i < 5; i++) {
		dog[i] = new Dog();
		cat[i] = new Cat();
		for (int j = 0; j < 100; j++) {
			char msg[1024];
			sprintf(msg, "I'm dog %i and I'm eating the bone %i", i + 1, j + 1);
			std::string dogMsg = msg;
			std::cout << dogMsg << std::endl;
			sprintf(msg, "I'm cat %i and I'm eating the fish %i", i + 1, j + 1);
		}
	}

	for (int i = 0; i < 5; i++) {
		delete dog[i];
		delete cat[i];
	}
	return (0);
}