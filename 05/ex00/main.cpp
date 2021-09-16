#include <iostream>
#include "Bureaucrat.hpp"


class	Outofrange : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT { return ("OOOOOPPS\n");}
};

void 	testfunc(int a)
{
	if (a > 2)
		throw (Outofrange());
	else
		throw (228);
}

int main( void )
{
	try
	{
		testfunc(10);
	}
	catch (Outofrange& err)
	{
		std::cout << err.what();
	}
	catch (int& b)
	{
		std::cout << "INT ERROR\n";
	}
	std::cout << "HElo";
	return 0;
}