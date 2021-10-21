#include <iostream>
#include "Array.hpp"
#include "Test.hpp"

#define MAX_VAL 750
//int main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;//
//	return 0;
//}


int main( void )
{
	std::cout << "====================================" << std::endl;
	std::cout << "                Test char           " << std::endl;
	Array<char> a1(6);
	a1[0] = 'q';
	a1[1] = 'w';
	a1[2] = 'e';
	a1[3] = 'r';
	a1[4] = 't';
	a1[5] = 'y';
	std::cout << a1[0] << a1[1] << a1[2] << a1[3] << a1[4] << a1[5]
	<< std::endl;
	Array<char> b1 (a1);
	a1[0] = 'a';
	std::cout << b1[0] << b1[1] << b1[2] << b1[3] << b1[4] << b1[5]
			  << std::endl;
	Array<char> c1;
	c1 = a1;
	std::cout << c1[0] << c1[1] << c1[2] << c1[3] << c1[4] << c1[5]
			  << std::endl;
	try
	{
		std::cout << b1[-10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "====================================" << std::endl;
	std::cout << "                Test int           " << std::endl;
	Array<char> a2(6);
	a2[0] = '1';
	a2[1] = '2';
	a2[2] = '3';
	a2[3] = '4';
	a2[4] = '5';
	a2[5] = '6';
	std::cout << a2[0] << a2[1] << a2[2] << a2[3] << a2[4] << a2[5]
			  << std::endl;
	Array<char> b2 (a2);
	a2[0] = '9';
	std::cout << b2[0] << b2[1] << b2[2] << b2[3] << b2[4] << b2[5]
			  << std::endl;
	Array<char> c2;
	c2 = a2;
	std::cout << c2[0] << c2[1] << c2[2] << c2[3] << c2[4] << c2[5]
			  << std::endl;
	try
	{
		std::cout << b2[-10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "====================================" << std::endl;
	std::cout << "                Test string          " << std::endl;
	Array<std::string> a3(6);
	a3[0] = "Q1 ";
	a3[1] = "W2 ";
	a3[2] = "E3 ";
	a3[3] = "R4 ";
	a3[4] = "T5 ";
	a3[5] = "Y6 ";
	std::cout << a3[0] << a3[1] << a3[2] << a3[3] << a3[4] << a3[5]
			  << std::endl;
	Array<std::string> b3 (a3);
	a3[0] = "ZAMENA ";
	std::cout << b3[0] << b3[1] << b3[2] << b3[3] << b3[4] << b3[5]
			  << std::endl;
	Array<std::string> c3;
	c3 = a3;
	std::cout << c3[0] << c3[1] << c3[2] << c3[3] << c3[4] << c3[5]
			  << std::endl;
	try
	{
		std::cout << b3[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "====================================" << std::endl;
	std::cout << "                Test class          " << std::endl;
	Array<Test> a4(3);
	Test t1(1);
	Test t2(2);
	Test t3(3);
	Test t4(4);
	a4[0] = t1;
	a4[1] = t2;
	a4[2] = t3;

	std::cout << a4[0] << a4[1] << a4[2]  << std::endl;
	Array<Test> b4 (a4);
	a4[0] = t4;
	std::cout << b4[0] << b4[1] << b4[2] << std::endl;
	Array<Test> c4;
	c4 = a4;
	std::cout << c4[0] << c4[1] << c4[2] << std::endl;
	try
	{
		std::cout << a4[45];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "====================================" << std::endl;
}
