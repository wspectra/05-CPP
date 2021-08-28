#include "Zombie.hpp"
#include <iostream>
#include <new>

void randomChump(std::string name)
{
	Zombie new_zombie(name);
	new_zombie.announce();
}