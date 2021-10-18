#pragma once

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
	std::string _target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &object);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &object);

	void action(void) const;
	std::string getTarget(void);
};
