#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void ) : _name(), _grade(150)
{
    std::cout << "Bureaucrat " << " created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::TooLow();
    else if (grade > 150)
        throw Bureaucrat::TooHigh();
    else
        std::cout << "Bureaucrat " << "created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << _name << " deleted" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &object)
{
    *this = object;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object)
{
    if (this == &object)
        return (*this);
    _name = object.getName();
    _grade = object.getGrade();
    std::cout << "Bureaucrat was copied " <<std::endl;
    return (*this);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

std::string Bureaucrat::getName(void) const
{
    return (_name);
}

void Bureaucrat::increaseGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::TooHigh();
    else
        _grade--;
}

void Bureaucrat::decreaseGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::TooLow();
    else
        _grade++;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << "`s grade is " << obj.getGrade() << std::endl;
    return (os);
}
