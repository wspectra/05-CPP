#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Bureaucrat.hpp"

int main( void )
{
	std::cout << "======================================" << std::endl;
	PresidentialPardonForm a1("ANN");
	RobotomyRequestForm a2("MIKE");
	ShrubberyCreationForm a3("BOB");
	Bureaucrat president("President", 1);
	Bureaucrat clerk("Clerk", 149);
	std::cout << "======================================" << std::endl;
	std::cout << a1;
	std::cout << a2;
	std::cout << a3;
	std::cout << "======================================" << std::endl;

	try
	{
		president.executeForm(a1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		president.executeForm(a2);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		president.executeForm(a3);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}


	try
	{
		clerk.signForm(a1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		clerk.signForm(a2);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		clerk.signForm(a3);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}

	president.signForm(a1);
	president.signForm(a2);
	president.signForm(a3);

	try
	{
		clerk.executeForm(a1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		clerk.executeForm(a2);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	try
	{
		clerk.executeForm(a3);
	}
	catch (std::exception& b)
	{
		std::cout << b.what() << std::endl;
	}
	president.executeForm(a1);
	president.executeForm(a2);
	president.executeForm(a3);

	std::cout << "======================================" << std::endl;
}
