#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;

}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(value  * (1 << bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &object)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &object)
		return (*this);
	value = object.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(const int raw)
{
	value = raw;
}

int Fixed::toInt() const
{
	return(value >> bits);
}

float Fixed::toFloat() const
{
	return ((float)value  / (float)(1 << bits));
}

std::ostream &operator<<(std::ostream& os, const Fixed &object)
{
	os << object.toFloat();
	return (os);
}