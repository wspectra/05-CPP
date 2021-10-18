#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	const std::string _name;
	int 		_grade;
public:
public:
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

    Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &object);
    ~Bureaucrat(void);
    Bureaucrat &operator=(const Bureaucrat &object);

	int getGrade(void) const;
	std::string getName(void) const;
    void increaseGrade();
    void decreaseGrade();

	void signForm(Form &obj);
	void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& ins);
