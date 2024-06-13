#include <iostream>

int	main(void) {
	std::string text = "HI THIS IS BRAIN";
	std::string *textPointer = &text;
	std::string &textReference = text;

	std::cout << "String Memory Address: " << &text << std::endl;
	std::cout << "String Pointer Memory Address: " << textPointer << std::endl;
	std::cout << "String Reference Memory Address: " << &textPointer << std::endl;
	std::cout << "String Value: " << text << std::endl;
	std::cout << "String Pointer Value: " << *textPointer << std::endl;
	std::cout << "String Reference Value: " << textReference << std::endl;
	return (0);
}
