#pragma once
#include <math.h>
#include <ostream>


class Fixed {
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);
	Fixed(const Fixed &object);
	Fixed &operator=(const Fixed &object);
	int getRawBits(void) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	bool				operator>(const Fixed &object) const;
	bool				operator<(const Fixed &object) const;
	bool				operator>=(const Fixed &object) const;
	bool				operator<=(const Fixed &object) const;
	bool				operator==(const Fixed &object) const;
	bool				operator!=(const Fixed &object) const;
	Fixed				operator+(const Fixed &object);
	Fixed				operator-(const Fixed &object);
	Fixed				operator*(const Fixed &object);
	Fixed				operator/(const Fixed &object);
	Fixed 				&operator++();
	Fixed 				operator++(int);
	Fixed				&operator--();
	Fixed 				operator--(int);
	static	Fixed 		&min(Fixed& obj1, Fixed& obj2);
	static	const Fixed &min(const Fixed& obj1, const Fixed& obj2);
	static	Fixed 		&max(Fixed& obj1, Fixed& obj2);
	static	const Fixed &max(const Fixed& obj1, const Fixed& obj2);


};
std::ostream &operator<<(std::ostream& os, const Fixed &object);
