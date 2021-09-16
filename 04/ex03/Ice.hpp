#pragma once
#include "MainHeader.hpp"


class Ice : public AMateria{
public:
	Ice(void);
	Ice(const Ice &object);
	~Ice();
	Ice &operator=(const Ice &object);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
