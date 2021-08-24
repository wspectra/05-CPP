#include "PhoneBook.hpp"
PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::add(void)
{
	static int i = 0;

	std::cout << "ENTER FIRST: ";
	std::cin >> arr[i][0];
	std::cout << "ENTER LAST: ";
	std::cin >> arr[i][1];
	std::cout << "ENTER NICK: ";
	std::cin >> arr[i][2];
	std::cout << "ENTER PHONE: ";
	std::cin >> arr[i][3];
	std::cout << "ENTER SECRET: ";
	std::cin >> arr[i][4];
	i++;
	if (i == 8)
		i = 0;

}

void PhoneBook::search(void)
{
	int i;
	int j;

	i = 0;
	while (i < 8 && !arr[i][0].empty())
	{
		std::cout <<std::setw(10) << i << "|";
		j = 0;
		while (j < 3)
		{
			if (arr[i][j].length() > 10)
			{
				std::cout << arr[i][j].substr(0, 9) << ".|";
			}
			else
				std::cout << std::setw(10) << arr[i][j] << "|";
			j++;
		}
		std::cout << std::endl;
		i++;
	}
	std::cin >> i;
	j = 0;
	if (arr[i][0].empty())
	{
		std::cout << "ERROR" << std::endl;
		return;
	}
	while (j < 5)
	{
		std::cout << arr[i][j] << std::endl;
		j++;
	}
	return;
}
