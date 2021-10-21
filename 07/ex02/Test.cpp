#include "Test.hpp"

Test::Test() {}

Test::Test(int nb) : _nb(nb) {}

Test::~Test() {}


bool	Test::operator>(const Test &object) const
{
	if (_nb > object._nb)
		return (true);
	return (false);
}

bool	Test::operator<(const Test &object) const
{
	if (_nb < object._nb)
		return (true);
	return (false);
}

Test	&Test::operator=(const Test &object)
{
	_nb = object.getNb();
	return (*this);
}

int 	Test::getNb(void) const
{
	return (_nb);
}

void 	Test::setNb(const int nb)
{
	_nb = nb;
}
std::ostream &operator<<(std::ostream& os, const Test& obj)
{
	os << obj.getNb();
	return (os);
}