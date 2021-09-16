#include "MainHeader.hpp"


Ice::Ice(void)
{
	type = "ice";
}

Ice::Ice(const Ice &object)
{
	*this = object;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &object)
{
	if (this == &object)
		return (*this);
	return (*this);
}


AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
