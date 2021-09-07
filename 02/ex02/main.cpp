#include <iostream>
#include "Fixed.hpp"

//int main( void )
//{
//	Fixed a;
//	Fixed const b(Fixed(5.05f) * Fixed(2));
//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	std::cout << Fixed::max(a, b) << std::endl;
//	return 0;
//}

int main(void )
{
	Fixed a(3);
	Fixed b(5);
	Fixed c;
	c = b;

	if (a < b)
		std::cout << a << " <  " << b << " true " << std::endl;
	else
		std::cout << a << " <  " << b << " false " << std::endl;
	if (a > b)
		std::cout << a << " >  " << b << " true " << std::endl;
	else
		std::cout << a << " >  " << b << " false " << std::endl;
	if (a <= b)
		std::cout << a << " <= " << b << " true " << std::endl;
	else
		std::cout << a << " <= " << b << " false " << std::endl;
	if (a >= b)
		std::cout << a << " >= " << b << " true " << std::endl;
	else
		std::cout << a << " >= " << b << " false " << std::endl;
	if (a == b)
		std::cout << a << " == " << b << " true " << std::endl;
	else
		std::cout << a << " == " << b << " false " << std::endl;
	if (a != b)
		std::cout << a << " != " << b << " true " << std::endl;
	else
		std::cout << a << " != " << b << " false " << std::endl;

	std::cout << "===========================================" << std::endl;
	if (c < b)
		std::cout << c << " <  " << b << " true " << std::endl;
	else
		std::cout << c << " <  " << b << " false " << std::endl;
	if (c > b)
		std::cout << c << " >  " << b << " true " << std::endl;
	else
		std::cout << c << " >  " << b << " false " << std::endl;
	if (c <= b)
		std::cout << c << " <= " << b << " true " << std::endl;
	else
		std::cout << c << " <= " << b << " false " << std::endl;
	if (c >= b)
		std::cout << c << " >= " << b << " true " << std::endl;
	else
		std::cout << c << " >= " << b << " false " << std::endl;
	if (c == b)
		std::cout << c << " == " << b << " true " << std::endl;
	else
		std::cout << c << " == " << b << " false " << std::endl;
	if (c != b)
		std::cout << c << " != " << b << " true " << std::endl;
	else
		std::cout << c << " != " << b << " false " << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << b << " / " << a << " = " << b / a << std::endl;
	std::cout << b << " / " << b << " = " << b / b << std::endl;
	float a1 = 3;
	float a2 = 5;
	std::cout << "res 3/5 == " << a1 / a2 << std::endl; ///WTF????????
	std::cout << "res 5/3 == " << a2 / a1 << std::endl; ///WTF????????
	std::cout << "===========================================" << std::endl;
	std::cout << "MIN = " << Fixed::min(a, b) << std::endl;
	std::cout << "MAX = " << Fixed::max(a, b) << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << "a   " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a   " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a   " << a << std::endl;
	std::cout << "a-- " << a-- << std::endl;
	std::cout << "a   " << a << std::endl;
	std::cout << "--a " << --a << std::endl;
	std::cout << "a   " << a << std::endl;
	return(0);
}