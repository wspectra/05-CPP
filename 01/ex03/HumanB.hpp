#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	Weapon *weapon;
	std::string name;
	int weapon_nb;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

