#include <iostream>
#include "span.hpp"

//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(5);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//}

int main()
{
	Span sp = Span(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: "  << sp.longestSpan() << std::endl;

	std::cout << "==========================================" << std::endl;
	Span s1(5);
	try
	{
		int array[] = {5, 3, 17, 9, 11};
		s1.addNumber(array, array + sizeof array / sizeof (int));
		s1.displayContent();
		s1.addNumber(array, array + sizeof array / sizeof (int));
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s1.longestSpan() << std::endl;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	std::cout << "==========================================" << std::endl;
	Span s2(10001);
	try
	{
		int array[10001];
		for (int i = 0; i < 10001; i++)
			array[i] = i;
		s2.addNumber(array, array + sizeof array / sizeof (int));
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << s2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s2.longestSpan() << std::endl;
	}
	catch (std::exception &a)
	{
		std::cout << a.what() << std::endl;
	}
	return (0);
}

