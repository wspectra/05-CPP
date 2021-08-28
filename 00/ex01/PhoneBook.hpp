#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <string>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact contacts[8];
	int nb_contacts;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void add();
	void search();
};


#endif
