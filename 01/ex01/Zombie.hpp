#pragma once
#include <iostream>
#include <new>

class Zombie {
public:
	Zombie(void);
	Zombie(std::string);
	~Zombie();
	void announce(void);

private:
	std::string name;
};
