#pragma once
#include "MainHeader.hpp"

class Character : public ICharacter{
private:
	std::string name;
	AMateria *arr[4];
	int 	nb_equip;
public:
	Character(void);
	Character(const std::string name);
	Character(const Character &object);
	~Character();
	Character &operator=(const Character &object);

	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
