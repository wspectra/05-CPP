#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::set_index(int index)
{
	this->index = index;
}
void Contact::set_info()
{
	std::cout << "ENTER FIRST NAME: ";
	std::cin >> first;
	std::cout << "ENTER LAST NAME: ";
	std::cin >> last;
	std::cout << "ENTER NICKNAME: ";
	std::cin >> nickname;
	std::cout << "ENTER PHONE NUMBER: ";
	std::cin >> number;
	std::cout << "ENTER DARKEST SECRET: ";
	std::cin >> secret;
}

void Contact::get_info()
{
	std::cout <<"--------------------------------------------" << std::endl;
	std::cout << "FIRST NAME: " << first << std::endl;
	std::cout << "LAST NAME: " << last << std::endl;
	std::cout << "NICKNAME: " << nickname << std::endl;
	std::cout << "PHONE NUMBER: " << number << std::endl;
	std::cout << "DARKEST SECRET: " << secret << std::endl;
	std::cout <<"--------------------------------------------" << std::endl;
}

void Contact::search_info()
{

	std::cout <<std::setw(10) << index << "|";
	if (first.length() > 10)
		std::cout << first.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << first << "|";
	if (last.length() > 10)
		std::cout << last.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << last << "|";
	if (nickname.length() > 10)
			std::cout << nickname.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << nickname << "|";

	std::cout << std::endl;
}