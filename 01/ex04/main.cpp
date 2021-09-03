#include <iostream>
#include <fstream>

int print_error(std::string message)
{
	std::cout << message << std::endl;
	return (0);
}

std::string new_string(std::string sold, std::string snew, std::string buf)
{
	size_t position = buf.find(sold, 0);
	while (position != std::string::npos)
	{
		buf.erase(position, sold.length());
		buf.insert(position, snew);
		position = buf.find(sold, position + snew.length());
	}
	return(buf);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (print_error("WRONG UMBER OF ARGUMENTS"));
	std::string file_start = argv[1];
	std::string file_result = file_start + ".replace";
	std::ofstream result; //write
	std::ifstream start; //read
	std::string buffer;
	result.open(file_result, std::ofstream::out | std::ofstream::trunc );
	start.open(file_start);
	if (!result.is_open() || !start.is_open())
		return (print_error("Oops, something went wrong..."));
	while (!start.eof())
	{
		std::getline(start, buffer);
		result << new_string(argv[2], argv[3], buffer);
		if (!start.eof())
			result << std::endl;
	}
	result.close();
	start.close();
	return (0);
}