#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap " << "default created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " deleted" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &object)
{
    *this = object;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &object)
{
    if (this == &object)
        return (*this);
    std::cout << "DiamondTrap " << name << " copied " << object.name <<std::endl;
    name = object.name;
    hitpoints = object.hitpoints;
    energy = object.energy;
    damage = object.damage;
    return (*this);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +"lasdasd" ), FragTrap(name), ScavTrap(name)
{
    d_name = name;
//    ClapTrap::name = name + "_clap_name";
    hitpoints = FragTrap::hitpoints;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
    std::cout << "DiamondTrap " << name << " created" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name: " << d_name << "\t\tClapTrap name :" << ClapTrap::name
    << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}