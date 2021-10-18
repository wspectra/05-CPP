#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
		: Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object)
		: Form("PresidentialPardonForm", 25, 5)
{
	_target = object._target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const
		PresidentialPardonForm &object)
{
	if (this == &object)
		return (*this);
	_target = object._target;
	std::cout << "PresidentialPardonForm was copied " <<std::endl;
	return (*this);
}

void PresidentialPardonForm::action(void) const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
