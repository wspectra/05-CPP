#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	Zombie *zombie_arr = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombie_arr[i].set_name(name);
		i++;
	}
	return(zombie_arr);
}