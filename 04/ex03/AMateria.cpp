#include "MainHeader.hpp"


AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(void) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &object)
{
    *this = object;
}

AMateria &AMateria::operator=(const AMateria &object)
{
    if (this == &object)
        return (*this);
	type = object.getType();
    return (*this);
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	target.getName();
}
