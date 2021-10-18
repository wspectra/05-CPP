#pragma once

#include "Form.hpp"
#include <iostream>

class Intern {
public:
	Intern(void);
	Intern(const Intern &object);
	~Intern(void);
	Intern &operator=(const Intern &object);

	Form *makeForm(const std::string s1, const std::string s2);

};

