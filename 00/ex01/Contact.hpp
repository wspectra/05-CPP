#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>

class Contact {
public:
	void get_info();
	void set_info();
	void search_info();
	void set_index(int index);
	Contact();
	~Contact();

private:
	int index;
	std::string first;
	std::string last;
	std::string nickname;
	std::string number;
	std::string secret;
};


#endif