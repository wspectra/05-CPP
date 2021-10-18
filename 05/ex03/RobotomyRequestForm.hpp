#pragma once

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
		std::string _target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &object);
	~RobotomyRequestForm(void);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &object);

void action(void) const;
};
