#include <iostream>

int main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "The address of the string                     "
			  << &stringPTR << std::endl;
	std::cout << "The address of the string using stringPTR     "
	<< stringPTR << std::endl;
	std::cout << "The address of the string using stringREF     "
			  << &stringREF << std::endl;
	std::cout << "display the string using stringPTR            \""
	<< *stringPTR << "\"" << std::endl;
	std::cout << "display the string using stringREF            \""
			  << stringREF << "\""<<  std::endl;
}