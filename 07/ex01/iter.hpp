#pragma once
#include <iostream>

template<typename type>
void iter(type *a, int length, void (*f)(type obj))
{
	int i = 0;
	while (i < length)
		(*f)(a[i++]);
}

template<typename type>
void printElem(type obj)
{
	std::cout << obj << " ";
}
