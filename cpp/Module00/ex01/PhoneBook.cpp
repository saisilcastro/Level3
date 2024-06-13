#include <PhoneBook.h>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(void){
	firstName = "fuckeeeeeeeeeeerrrrrrrr";
	lastName = "suckeeeeeeeeeeeeeerrrrrr";
	nickname = "dickeeeeeeerrrrrr";
	phoneNumber = "11";
	darkSecret = "69";
}

void PhoneBook::Set(std::string fN, std::string lN, std::string nN, std::string pN, std::string dS){
	firstName = fN;
	lastName = lN;
	nickname = nN;
	phoneNumber = pN;
	darkSecret = dS;
}

std::string PhoneBook::TextTruncate(std::string text)
{
	if (text.length() >= 10)
		return (text.substr(0, 9) + ".");
	return (text);
}

void PhoneBook::List(int index){
	std::string wait;

	std::cout << std::right << std::setw(6) << "Index:" << index << "|";
	std::cout << std::right << std::setw(10) << TextTruncate(firstName) << "|";
	std::cout << std::right << std::setw(10) <<  TextTruncate(lastName) << "|";
	std::cout << std::right << std::setw(10) << TextTruncate(nickname) << std::endl;
}

void PhoneBook::Show(void) {
	std::string wait;

	system("clear");

	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Dark Secret: " << darkSecret << std::endl;
	std::cin.ignore(INT_MAX, '\n');
	if(getline(std::cin, wait));
}

PhoneBook::~PhoneBook(){}