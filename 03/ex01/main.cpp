#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap mike("Mike");
    mike.attack("Ann");
    mike.takeDamage(10);
    mike.beRepaired(5);
    mike.guardGate();
	return 0;
}