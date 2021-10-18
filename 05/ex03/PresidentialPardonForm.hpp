#pragma once

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string _target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &object);
	~PresidentialPardonForm(void);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &object);

	void action(void) const;
};
