#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Form a1("A1", 170, 149);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;

	std::cout << "======================================" << std::endl;
}
