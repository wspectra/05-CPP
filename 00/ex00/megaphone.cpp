#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int k;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\a" << std::endl;
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				std::cout << (char)std::toupper(argv[i][k]);
				k++;
			}
			std::cout << " ";
			i++;
		}
		std::cout <<std::endl;
	}
	return (0);
}