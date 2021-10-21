#pragma once
#include <iostream>
class Test {
private:
	int _nb;
public:
	Test();
	Test(int nb);
	~Test();

	bool	operator>(const Test &object) const;
	bool	operator<(const Test &object) const;
	Test	&operator=(const Test &object);
	int 	getNb(void) const;
	void 	setNb(const int nb);
};

std::ostream &operator<<(std::ostream& os, const Test& ins);
