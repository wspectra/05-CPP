#pragma once

#include <iostream>

class Bureaucrat {
private:
	std::string _name;
	int 		_grade;
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	int getGrade(void);
	std::string getName(void);

};
