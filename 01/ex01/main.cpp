#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main()
{
	int i = 0;
	Zombie *zombie_arr;

	zombie_arr = zombieHorde(5, "BILL");
	while (i < 5)
	{
		std::cout << "#" << i << " ";
		zombie_arr[i].announce();
		i++;
	}
	delete [] zombie_arr;
	return (0);
}