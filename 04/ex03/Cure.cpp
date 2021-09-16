#include "MainHeader.hpp"


Cure::Cure(void) : AMateria()
{
	type = "cure";
}

Cure::Cure(const Cure &object) : AMateria()
{
	*this = object;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &object)
{
	if (this == &object)
		return (*this);
	return (*this);
}


AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals  " << target.getName() << "’s wounds *"<< std::endl;
}
