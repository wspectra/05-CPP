#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap " << "default created" << std::endl;
}

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
	std::cout << "ClapTrap " << name << " take " << amount
	<< " points of damage!"  << std::endl;
	hitpoints = hitpoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " get "  << amount
			<< " points of hitpoints!"  << std::endl;
	hitpoints = hitpoints + amount;
}

void ClapTrap::getStatus()
{
	std::cout << "HP: " << hitpoints << "   Energy: " << energy
			  << "   damage: " << damage << std::endl;
}