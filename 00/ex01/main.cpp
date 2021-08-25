#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	std::string command;
	PhoneBook Book;

	while (1)
	{
		std::cout << "ENTER COMMAND: ";
		std::cin >> command;
		if (command == "ADD")
			Book.add();
		if (command == "SEARCH")
			Book.search();
		if (command == "EXIT")
			return (0);
	}
	return (0);
}