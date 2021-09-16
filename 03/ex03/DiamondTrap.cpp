#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap " << "default created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << " deleted" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &object)
{
    *this = object;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &object)
{
    if (this == &object)
        return (*this);
    std::cout << "DiamondTrap " << " copied " << object.name <<std::endl;
    name = object.name;
    hitpoints = object.hitpoints;
    energy = object.energy;
    damage = object.damage;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name),
									ScavTrap(name), FragTrap(name)
{
	ScavTrap tmp(name);
    this->d_name = name;
	this->ClapTrap::name = name + "_clap_name";
    hitpoints = FragTrap::hitpoints;
    energy = tmp.getEnergy();
    damage = FragTrap::damage;
    std::cout << "DiamondTrap " << d_name << " created" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name: " << d_name << "\t\tClapTrap name :" <<
	this->ClapTrap::name
    << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}