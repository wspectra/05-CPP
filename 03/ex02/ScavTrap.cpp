#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap " << "default created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " deleted" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &object)
{
    *this = object;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object)
{
    if (this == &object)
        return (*this);
    std::cout << "ScavTrap " << name << " copied " << object.name <<std::endl;
    name = object.name;
    hitpoints = object.hitpoints;
    energy = object.energy;
    damage = object.damage;
    return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitpoints = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " created" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << name << " attack "  << target << ", causing "
              << damage << " points of damage!"  << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode"
     << std::endl;
}
