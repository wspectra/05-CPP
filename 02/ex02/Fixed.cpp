#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	value = 0;
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = object;

}

Fixed::Fixed(const int value)
{
//	std::cout << "Int constructor called" << std::endl;
	this->value = (value << bits);
}

Fixed::Fixed(const float value)
{
//	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(value  * (1 << bits)));
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &object)
{
//	std::cout << "Assignation operator called" << std::endl;
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

bool Fixed::operator>(const Fixed &object) const
{
	return (value > object.value);
}

bool Fixed::operator<(const Fixed &object) const
{
	return (value < object.value);
}

bool Fixed::operator>=(const Fixed &object) const
{
	return (value >= object.value);
}

bool Fixed::operator<=(const Fixed &object) const
{
	return (value <= object.value);
}

bool Fixed::operator==(const Fixed &object) const
{
	return (value == object.value);
}

bool Fixed::operator!=(const Fixed &object) const
{
	return (value != object.value);
}

Fixed Fixed::operator+(const Fixed &object)
{
	Fixed tmp;
	tmp.value = (value + object.value);
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &object)
{
	Fixed tmp;
	tmp.value = (value - object.value);
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &object)
{
	Fixed tmp;
	tmp.value = (value * object.value) >> bits;
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &object)
{
	Fixed tmp;
	tmp.value = ((value << bits) / object.value);
	return (tmp);
}

Fixed &Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.value = value;
	value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp.value = value;
	value--;
	return (tmp);
}

Fixed&			Fixed::min(Fixed& obj1, Fixed& obj2)
{
	return (obj1 < obj2 ? obj1 : obj2);
}

const Fixed&	Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	return (obj1 < obj2 ? obj1 : obj2);
}

Fixed&			Fixed::max(Fixed& obj1, Fixed& obj2)
{
	return (obj1 < obj2 ? obj2 : obj1);
}

const Fixed&	Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	return (obj1 < obj2 ? obj2 : obj1);
}
