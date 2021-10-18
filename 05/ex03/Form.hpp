#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name;
	const int _gradeSign;
	const int _gradeExecute;
	bool _signed;


	class GradeTooHighException : public std::exception{
	public:
		const char*	what() const throw()
		{
			return ("\033[0;31mToo high grade\033[m");
		}
	};

	class GradeTooLowException : public std::exception{
	public:
		const char*	what() const throw()
		{
			return ("\033[0;31mToo low grade\033[m");
		}
	};

public:
	Form(void);
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(const Form &object);
	~Form(void);
	Form &operator=(const Form &object);

	std::string getName(void) const;
	bool getSigned(void) const;
	int getGradeSign(void) const;
	int getGradeExecute(void) const;
	void setSign();
	void beSigned(const Bureaucrat &obj);

	virtual	void 		action(void) const = 0;
	void execute(Bureaucrat const & executor);
};

std::ostream &operator<<(std::ostream& os, const Form& ins);