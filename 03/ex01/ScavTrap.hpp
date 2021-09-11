#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &object);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &object);

    virtual void attack(std::string const & target);
    void guardGate();

};

