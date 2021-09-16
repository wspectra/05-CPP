#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap " << "default created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << " deleted" << std::endl;

}

FragTrap::FragTrap(const FragTrap &object)
{
    *this = object;
}

FragTrap &FragTrap::operator=(const FragTrap &object)
{
    if (this == &object)
        return (*this);
    std::cout << "FragTrap " << " copied " << object.name <<std::endl;
    name = object.name;
    hitpoints = object.hitpoints;
    energy = object.energy;
    damage = object.damage;
    return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitpoints = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << " created" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << ": Give me high five, guys!"  << std::endl;
}


