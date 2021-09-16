#pragma once
#include <iostream>

class ClapTrap {
private:
	std::string	name;
	int			hitpoints;
	int			energy;
	int			damage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &object);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &object);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void getStatus(void);
};

