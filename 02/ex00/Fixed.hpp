#pragma once

class Fixed {
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed &object);
	Fixed &operator=(const Fixed &object);
	int getRawBits(void) const;
	void setRawBits( int const raw );
};

