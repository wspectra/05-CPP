#include <iostream>
#include "iter.hpp"
#include "Test.hpp"
int main( void )
{
	std::cout << "====================================" << std::endl;
	std::cout << "                Test char           " << std::endl;
	char a[6] = {'q', 'w', 'e', 'r', 't', 'y'};
	iter(a, 6, &printElem);
	std::cout << "\n====================================" << std::endl;
	std::cout << "                Test int           " << std::endl;
	int a1[6] = {1, 2, 3, 4, 5, 6};
	iter(a1, 6, &printElem);
	std::cout << "\n====================================" << std::endl;
	std::cout << "                Test string          " << std::endl;
	std::string a3[3] = {"qw", "er",  "qwerty"};
	iter(a3, 3, &printElem);
	std::cout << "\n====================================" << std::endl;
	std::cout << "                Test class          " << std::endl;
	Test a4[3];
	a4[0].setNb(1);
	a4[1].setNb(2);
	a4[2].setNb(3);
	iter(a4, 3, &printElem);
	std::cout << "\n====================================" << std::endl;
}
