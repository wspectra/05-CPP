#include "Form.hpp"


Form::Form(void ) : _name(), _gradeSign(150), _gradeExecute(150), _signed(false)
{
	std::cout << "Form " << " created" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name),
_gradeSign(gradeSign), _gradeExecute(gradeExecute), _signed(false)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute  > 150)
		throw Form::GradeTooLowException();
	else
		std::cout << "Form " << "created" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << _name << " deleted" << std::endl;
}

Form::Form(const Form &object) :
	_name(getName()), _gradeSign(object.getGradeSign()), _gradeExecute
	(object.getGradeExecute()), _signed(false) {}

Form &Form::operator=(const Form &object)
{
	if (this == &object)
		return (*this);
	_signed = object.getSigned();
	std::cout << "Form was copied " <<std::endl;
	return (*this);
}

std::string Form::getName(void) const
{
	return (_name);
}

bool Form::getSigned(void) const
{
	return (_signed);
}

int Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int Form::getGradeExecute(void) const
{
	return (_gradeExecute);
}

void Form::setSign()
{
	_signed = true;
}

void Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	else
	{
		_signed = true;
		std::cout << "\033[0;32m" << obj.getName() << " signs " << _name
				  << "\033[m" << std::endl;
	}
}

std::ostream &operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << ", form grade to sign " << obj.getGradeSign() <<
	", grade to execute " << obj.getGradeExecute();
	if (obj.getSigned())
		os << ", is signed" << std::endl;
	if (!obj.getSigned())
		os << ", is NOT signed" << std::endl;
	return (os);
}

void Form::execute(Bureaucrat const &executor)
{
	if (getSigned())
	{
		if (executor.getGrade() > _gradeSign)
			throw Form::GradeTooLowException();
		else
			action();
	}
	else
		std::cout << "\033[0;31m" << getName() << " not signed\033[m"
			<<	std::endl;
}



