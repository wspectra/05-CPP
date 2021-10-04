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
//	try
//	{
//		testfunc(10);
//	}
//	catch (Outofrange& err)
//	{
//		std::cout << err.what();
//	}
//	catch (int& b)
//	{
//		std::cout << "INT ERROR\n";
//	}
//	std::cout << "HElo";
//	return 0;

    try
    {
        Bureaucrat mike("Mike", 170);
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    try
    {
        Bureaucrat mike("Mike", 0);
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    Bureaucrat ann("Ann", 150);
    Bureaucrat bob("Bob", 1);
    Bureaucrat kate("Kate", 17);
    std::cout << ann;
    std::cout << bob;
    std::cout << kate;
    try
    {
        ann.decreaseGrade();
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    try
    {
        bob.increaseGrade();
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
    try
    {
        kate.increaseGrade();
        std::cout << kate;
        kate.decreaseGrade();
        std::cout << kate;
    }
    catch (std::exception& b)
    {
        std::cout << b.what() << std::endl;
    }
}
