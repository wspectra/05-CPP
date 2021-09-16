#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap mike("Mike");
	mike.getStatus();
	mike.attack("Ann");
    mike.takeDamage(10);
    mike.beRepaired(5);
    mike.guardGate();
	mike.getStatus();
	return 0;
}