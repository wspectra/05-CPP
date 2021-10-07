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
	}
	try
	{
		Form a1("A1", 149, 170);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		Form a1("A1", 0, 149);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		Form a1("A1", 149, 0);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	std::cout << "======================================" << std::endl;
	Form a2("A2", 149, 150);
	std::cout << a2;
	Bureaucrat mike("Mike", 150);
	mike.signForm(a2);
	std::cout << a2;
	Bureaucrat ann("Ann", 135);
	ann.signForm(a2);
	std::cout << a2;
	std::cout << "======================================" << std::endl;
	Form a3("A3", 1, 150);
	Form a4("A4", 149, 150);
	Bureaucrat bob("Bob", 130);
	bob.signForm(a3);
	std::cout << a3;
	bob.signForm(a4);
	std::cout << a4;
	std::cout << "======================================" << std::endl;
}
