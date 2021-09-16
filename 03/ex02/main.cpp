#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main( void )
{
    FragTrap mike("Mike");
	mike.getStatus();
	mike.attack("Ann");
    mike.takeDamage(10);
    mike.beRepaired(5);
    mike.highFivesGuys();
	mike.getStatus();
	return 0;	return 0;
}