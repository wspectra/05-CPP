#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " deleted" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &object)
{
	*this = object;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &object)
{
	if (this == &object)
		return (*this);
	std::cout << "ClapTrap " << name << " copied " << object.name <<std::endl;
	name = object.name;
	hitpoints = object.hitpoints;
	energy = object.energy;
	damage = object.damage;
	return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitpoints = 10;
	energy = 10;
	damage = 0;
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attack "  << target << ", causing "
	<< damage << " points of damage!"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " take " << damage
	<< " points of damage!"  << std::endl;
	hitpoints = hitpoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " get "  << damage
			<< " points of hitpoints!"  << std::endl;
	hitpoints = hitpoints + amount;
}
