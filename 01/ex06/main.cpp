#include <iostream>
#include "Karen.hpp"

std::string *get_messages()
{
	static std::string messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	return (messages);
}

int get_index(std::string level)
{
	int i;

	i = 0;
	while ( i < 4 && get_messages()[i] != level)
		i++;
	if (i == 4)
		return (100);
	return (i);
}

void display_level(int level)
{
	switch (level)
	{
		case 0:
			std::cout << "\033[0;31m[" << get_messages()[level]
					  << "]\033[0;0m" <<	std::endl;
			break;
		case 1:
			std::cout << "\033[0;31m[" << get_messages()[level]
					  << "]\033[0;0m" << std::endl;
			break;
		case 2:
			std::cout << "\033[0;31m[" << get_messages()[level]
					  << "]\033[0;0m" << std::endl;
			break;
		case 3:
			std::cout << "\033[0;31m[" << get_messages()[level]
					  << "]\033[0;0m" << std::endl;
			break;
		default:
			break;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "WRONG NUMBER OF ARGUMENTS" << std::endl;
		return (0);
	}
	Karen karen;
	karen.complain(argv[1]);
}
