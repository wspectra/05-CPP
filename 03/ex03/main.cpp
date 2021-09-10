#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap defo1;
	ClapTrap mike("Mike");
	mike.attack("Ann");
	mike.takeDamage(6);
	mike.beRepaired(5);
	ClapTrap defo(mike);
	return 0;
}