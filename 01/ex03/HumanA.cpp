#include "HumanA.hpp"

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon &weapon) :  weapon(weapon), name(name)
{
}

void HumanA::attack()
{
	std::cout << name << "attacks with his " << weapon.getType() << std::endl;
}