#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon_nb(0)
{}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (weapon_nb == 0)
	{
		std::cout << name << "attacks with NO WEAPON" << std::endl;
		return;
	}
	std::cout << name << "attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	weapon_nb = 1;
	this->weapon = &weapon;
}
