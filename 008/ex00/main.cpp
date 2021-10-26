#include <iostream>
#include "easyfind.hpp"
int main( void ) {
	int arr[] = {0, 1, 2, 3, 4, 5};
	std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof (int));
	try
	{
		easyfind(numbers, 3);
	}
	catch (std::exception &ex)
	{
		std::cout << "Number not found" << std::endl;
	}
	try
	{
		easyfind(numbers, 20);
	}
	catch (std::exception &ex)
	{
		std::cout << "Number not found" << std::endl;
	}
}
