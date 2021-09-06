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

int main()
{
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}