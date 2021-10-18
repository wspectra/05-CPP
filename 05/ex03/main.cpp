#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Bureaucrat.hpp"

int main( void )
{
	std::cout << "======================================" << std::endl;
	Intern someRandomIntern;
	Form* f1;
	Form* f2;
	Form* f3;
	Form* f4;

	f1 = someRandomIntern.makeForm("robotomy request", "Bender");
	f2 = someRandomIntern.makeForm("shrubbery request", "Bender");
	f3 = someRandomIntern.makeForm("presidential request", "Bender");
	f4 = someRandomIntern.makeForm("request", "Bender");

	std::cout << *f1;
	std::cout << *f2;
	std::cout << *f3;

	delete f1;
	delete f2;
	delete f3;
	std::cout << "======================================" << std::endl;
	return 0;
}
