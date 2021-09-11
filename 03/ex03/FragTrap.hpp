#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &object);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &object);

    void highFivesGuys(void);
};
