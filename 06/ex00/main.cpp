#include <iostream>
#include <iostream>
#include <iomanip>

bool if_char(std::string const str)
{
	if (str.length() == 1 && std::isalpha(str[0]))
		return (true);
	return (false);
}

bool if_int(std::string const str)
{
	int i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0' && std::isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (true);
	return (false);
}

bool if_float(std::string const str)
{
	if (str =="-inff" || str == "+inff" || str == "nanf")
		return (true);
	int i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0' && std::isdigit(str[i]))
	{
		i++;
		if (str[i] == '.' && std::isdigit(str[i + 1]))
			i++;
	}
	if (str[i] == 'f' && str[i + 1] == '\0')
		return (true);
	return (false);
}

bool if_double(std::string const str)
{
	if (str =="-inf" || str == "+inf" || str == "nan")
		return (true);
	int i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0' && std::isdigit(str[i]))
	{
		i++;
		if (str[i] == '.' && std::isdigit(str[i + 1]))
			i++;
	}
	if (str[i] == '\0')
		return (true);
	return (false);
}

void what_type(std::string const str)
{
	if (if_char(str))
	{
		std::cout << "Char: " << str[0] << std::endl;
		std::cout << "Int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(str[0]) << std::endl;
		std::cout << "Double: " << static_cast<double>(str[0]) << std::endl;

	}
	else if (if_int(str))
	{
		double val = std::strtol(str.c_str(), nullptr, 10);
		if (std::isprint(val))
			std::cout << "Char: " << static_cast<char>(val) << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << val << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(val) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(val) << std::endl;
	}
	else if (if_float(str))
	{
		float val = std::strtof(str.c_str(), nullptr);
		if (std::isprint(val) && str !="-inff" && str != "+inff"&& str != "nanf")
		{
			std::cout << "Char: " << static_cast<char>(val) << std::endl;
			std::cout << "Int: " << static_cast<int>(val) << std::endl;
		}
		else if (str =="-inff" || str == "+inff"  || str == "nanf")
		{
			std::cout << "Char: impossible" << std::endl;
			std::cout << "Int: impossible" <<  std::endl;
		}
		else
		{
			std::cout << "Char: Non displayable" << std::endl;
			std::cout << "Int: " << static_cast<int>(val) << std::endl;
		}
		std::cout << "Float: " << std::fixed << std::setprecision(1) << val
		<< "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(val) << std::endl;
	}
	else if (if_double(str))
	{
		{
			double val = std::strtof(str.c_str(), nullptr);
			if (std::isprint(val) && str !="-inf" && str != "+inf"&& str != "nan")
			{
				std::cout << "Char: " << static_cast<char>(val) << std::endl;
				std::cout << "Int: " << static_cast<int>(val) << std::endl;
			}
			else if (str =="-inf" || str == "+inf"  || str == "nan")
			{
				std::cout << "Char: impossible" << std::endl;
				std::cout << "Int: impossible" <<  std::endl;
			}
			else
			{
				std::cout << "Char: Non displayable" << std::endl;
				std::cout << "Int: " << static_cast<int>(val) << std::endl;
			}
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float> (val) << "f" <<
			std::endl;
			std::cout << "Double: " << val << std::endl;
		}
	}
	else
	{
		std::cout << "ERROR!" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	what_type(argv[1]);
	return (0);
}
