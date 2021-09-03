#pragma once
#include <iostream>
class Weapon {
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const &getType();
	void setType(std::string type);

private:
	std::string  type;
};



