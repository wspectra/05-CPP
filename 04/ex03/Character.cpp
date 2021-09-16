#include "MainHeader.hpp"

Character::Character(void)
{
	bzero(arr, sizeof(AMateria*) * 4);
}

Character::Character(const std::string name) : name(name), nb_equip(0) {}

Character::Character(const Character &object)
{
	*this = object;
}

Character::~Character()
{
	while (nb_equip >= 0)
		delete arr[nb_equip--];
}

Character &Character::operator=(const Character &object)
{
	if (this == &object)
		return (*this);
	name = object.name;
	while (nb_equip != 0)
		delete arr[nb_equip--];
	while (nb_equip < 4)
		arr[nb_equip] = object.arr[nb_equip]->clone();
	return (*this);
}


std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	if (nb_equip < 4 && m)
		arr[nb_equip++] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		arr[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (arr[idx])
	{
//		std::cout << name << "used materia #" << idx << "  " << std::endl;
		arr[idx]->use(target);
	}
}
