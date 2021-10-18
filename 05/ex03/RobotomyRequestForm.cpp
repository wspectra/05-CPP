#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
		: Form("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		: Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object)
		: Form("RobotomyRequestForm", 72, 45)
{
_target = object._target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const
				RobotomyRequestForm &object)
{
	if (this == &object)
		return (*this);
	_target = object._target;
	std::cout << "RobotomyRequestForm was copied " <<std::endl;
	return (*this);
}

void RobotomyRequestForm::action(void) const
{
	std::srand(std::time(nullptr));
	if (std::rand() % 2 == 0)
		std::cout << "* SOME DRILLING NOISE *. " << _target
		<< " has been robotomized successfully 50% of the time.\n";
	else
		std::cout << "It’s a failure\n";
}
