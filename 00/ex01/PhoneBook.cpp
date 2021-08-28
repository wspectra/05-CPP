#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	nb_contacts = 0;
}

PhoneBook::~PhoneBook(void) {}


void PhoneBook::add(void)
{
	static int i = 0;
	contacts[i].set_index(i);
	contacts[i].set_info();

//	std::cout << "ENTER FIRST NAME: ";
//	std::cin >> arr[i][0];
//	std::cout << "ENTER LAST NAME: ";
//	std::cin >> arr[i][1];
//	std::cout << "ENTER NICKNAME: ";
//	std::cin >> arr[i][2];
//	std::cout << "ENTER PHONE NUMBER: ";
//	std::cin >> arr[i][3];
//	std::cout << "ENTER DARKEST SECRET: ";
//	std::cin >> arr[i][4];
	i++;
	if (nb_contacts != 8)
		nb_contacts = i;
	if (i == 8)
		i = 0;

}

void PhoneBook::search(void)
{
	int i;
	std::string index;

	std::cout <<"--------------------------------------------" << std::endl;
	std::cout << "INDEX     |FIRST     |LAST      |NICKNAME  |"<< std::endl;
	std::cout <<"--------------------------------------------" << std::endl;
	i = 0;
	while (i < 8 && i < nb_contacts)
	{
		contacts[i].search_info();
		i++;
	}
	if (nb_contacts == 0)
		return;
	std::cout <<"--------------------------------------------" << std::endl;

	std::cout << "ENTER INDEX: ";
	std::cin >> index;

	i = std::atoi(index.c_str());
	if (i < 0 || i > 8 || !std::isdigit(index[0]))
	{
		std::cout << "WRONG INDEX" << std::endl;
		return;
	}
	contacts[i].get_info();

//	j = 0;
//	if (arr[i][0].empty(inde))
//	{
//		std::cout << "ERROR" << std::endl;
//		return;
//	}
//	while (j < 5)
//	{
//		std::cout << arr[i][j] << std::endl;
//		j++;
//	}
//	return;
}
