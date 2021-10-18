#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {}
Intern::Intern(const Intern &object)
{
	*this = object;
}

Intern::~Intern(void) {}
Intern &Intern::operator=(const Intern &object)
{
	if (this == &object)
		return (*this);
	return (*this);

}

int getIndex(const std::string& s1)
{
	std::string	forms[3] = {"shrubbery request",
		"robotomy request", "presidential request"};
	int i = 0;
	while (i < 3 && forms[i] != s1)
		i++;
	return (i);
}
Form*	formArray0(const std::string s2)
{
	return (new ShrubberyCreationForm(s2));
}

Form*	formArray1(const std::string s2)
{
	return (new RobotomyRequestForm(s2));
}

Form*	formArray2(const std::string s2)
{
	return (new PresidentialPardonForm(s2));
}

Form*	formArray3(const std::string s2)
{
	std::cout << "\033[0;31mNo form named " << s2 << "\033[m" << std::endl;
	return (nullptr);
}


Form *Intern::makeForm(const std::string s1, const std::string s2)
{
	Form *(* arr[4])(const std::string s2) = {&formArray0, &formArray1,
												&formArray2, &formArray3};
		return (arr[getIndex(s1)](s2));
}