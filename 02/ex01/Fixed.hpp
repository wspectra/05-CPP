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

};
std::ostream &operator<<(std::ostream& os, const Fixed &object);
