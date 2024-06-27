#include <Contact.h>
#include <fstream>
#include <iostream>
#include <string>

Contact::Contact(void){
	pos = 0;
	max = 0;
}

bool Contact::Insert(void)
{
	std::string fN;
	std::string lN;
	std::string nN;
	std::string pN;
	std::string dS;

	system("clear");
	std::cout << "Index: " << pos << std::endl;
	std::cout << "First Name: ";
	std::cin.ignore(INT_MAX, '\n');
	getline(std::cin, fN);
	std::cout << "Last Name: ";
	getline(std::cin, lN);
	std::cout << "Nickname: ";
	getline(std::cin, nN);
	std::cout << "Phone Number: ";
	getline(std::cin, pN);
	std::cout << "Dark secret: ";
	getline(std::cin, dS);
	if (fN.empty() || lN.empty() || nN.empty() || pN.empty() || dS.empty())
	{
		std::cout << "No field can be empty";
		return false;
	}
	agenda[pos++].Set(fN, lN, nN, pN, dS);
	if (max < 8)
		max++;
	if (pos >= 8)
		pos = 0;
	return true;
}

void Contact::Menu()
{
	std::string command;

	while (1)
	{
		system("clear");
		std::cout << "[ADD] Add a new contact\n";
		std::cout << "[SEARCH] Search for contact\n";
		std::cout << "[EXIT] Exit the app\n";
		std::cin >> command;
		if (command == "EXIT")
			return ;
		if (command == "ADD")
			while (!Insert());
		if (command == "SEARCH")
		{
			int	index;

			system("clear");
			for (int i = 0; i < max; i++)
				agenda[i].List(i);
			std::cout << std::endl << "Digit the index: ";
			std::cin >> index;
			if (index >= 0 && index < 8 && index < max)
				agenda[index].Show();
			std::cin.clear();
		}
	}
}

Contact::~Contact(){}

int main(void)
{
	Contact contact;
	contact.Menu();
	return (0);
}