#include <iostream>
#include <vector>

template <typename T>
typename std::vector<T>::iterator easyfind(std::vector<T>  &cont, int nb)
{
	typename std::vector<T>::iterator iter;

	iter = std::find(cont.begin(), cont.end(), nb);
	if (iter != cont.end())
	{
		std::cout << "The element index = " << iter - cont.begin() << std::endl;
		return (iter);
	}
	else
		throw std::exception();
}