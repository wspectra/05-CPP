#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main( void )
{
    DiamondTrap mike("Mike");
    mike.attack("Ann");
    mike.takeDamage(10);
    mike.beRepaired(5);
    mike.guardGate();
    mike.highFivesGuys();
    mike.whoAmI();
    return 0;	return 0;
}