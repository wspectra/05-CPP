#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class PhoneBook{
private:
	std::string arr[8][5];
public:
	PhoneBook(void);
	~PhoneBook(void);
	void add();
	void search();

};


#endif
