#pragma once
#include "MainHeader.hpp"


class Cure : public AMateria{
public:
	Cure(void);
	Cure(const Cure &object);
	~Cure();
	Cure &operator=(const Cure &object);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
