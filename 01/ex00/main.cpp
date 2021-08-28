#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main()
{
	Zombie *mike;

	mike = newZombie("Mike");
	mike->announce();
	randomChump("ALEX");
	delete mike;
	return (0);
}
