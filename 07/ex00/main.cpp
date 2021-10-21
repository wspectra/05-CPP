#include <iostream>
#include "whatever.hpp"
#include "Test.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
	return 0;
}
//int main(void)
//{
//	std::cout << "====================================" << std::endl;
//	std::cout << "                Test char           " << std::endl;
//	char a = 'a';
//	char b = 'c';
//	std::cout << "MIN = " << min(a, b) << std::endl;
//	std::cout << "MAX = " << max(a, b) << std::endl;
//	std::cout << "before swap a = " << a << "  c = " << b << std::endl;
//	swap(&a, &b);
//	std::cout << "after swap a = " << a << "  c = " << b << std::endl;
//	std::cout << "====================================" << std::endl;
//	std::cout << "                Test int           " << std::endl;
//	int a1 = 1;
//	int b1 = 10;
//	std::cout << "MIN = " << min(a1, b1) << std::endl;
//	std::cout << "MAX = " << max(a1, b1) << std::endl;
//	std::cout << "before swap a = " << a1 << "  c = " << b1 << std::endl;
//	swap(&a1, &b1);
//	std::cout << "after swap a = " << a1 << "  c = " << b1 << std::endl;
//	std::cout << "====================================" << std::endl;
//	std::cout << "                Test string          " << std::endl;
//	std::string a2 = "0123";
//	std::string b2 = "5678";
//	std::cout << "MIN = " << min(a2, b2) << std::endl;
//	std::cout << "MAX = " << max(a2, b2) << std::endl;
//	std::cout << "before swap a = " << a2 << "  c = " << b2 << std::endl;
//	swap(&a2, &b2);
//	std::cout << "after swap a = " << a2 << "  c = " << b2 << std::endl;
//	std::cout << "====================================" << std::endl;
//	std::cout << "                Test class          " << std::endl;
//	Test a3(15);
//	Test b3(30);
//	std::cout << "MIN = " << min(a3, b3).getNb() << std::endl;
//	std::cout << "MAX = " << max(a3, b3).getNb() << std::endl;
//	std::cout << "before swap a = " << a3.getNb() << "  c = " << b3.getNb() <<
//	std::endl;
//	swap(&a3, &b3);
//	std::cout << "after swap a = " << a3.getNb() << "  c = " << b3.getNb() <<
//	std::endl;
//	std::cout << "====================================" << std::endl;
//}
