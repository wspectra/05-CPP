#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *Base::generate()
{
	srand(time(NULL));
	int randNum = (rand() % 3);
	switch (randNum)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (nullptr);
}

void		identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout <<  "Class B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout <<  "Class C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &refA = dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
		refA = dynamic_cast<A&>(p);;
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}
	try
	{
		B &refB = dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
		refB = dynamic_cast<B&>(p);;
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}
	try
	{
		C &refC = dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
		refC = dynamic_cast<C&>(p);;
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}
}