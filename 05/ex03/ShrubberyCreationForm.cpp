#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
		: Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object)
		: Form("ShrubberyCreationForm", 145, 137)
{
_target = object._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm deleted" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const
													ShrubberyCreationForm &object)
{
	if (this == &object)
		return (*this);
	_target = object._target;
	std::cout << "ShrubberyCreationForm was copied " <<std::endl;
	return (*this);
}

void ShrubberyCreationForm::action(void) const
{
	std::ofstream file;

	file.open(std::string( _target + "_shrubbery").c_str(),
			  std::ofstream::out | std::ofstream::trunc);
	if(file.is_open())
	{
		file << "  \n"
				"               ,@@@@@@@,\n"
				"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
				"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
				"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
				"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
				"       |o|        | |         | |\n"
				"       |.|        | |         | |\n"
				"   \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_ "
							<< std::endl;
		file.close();
	}
}
