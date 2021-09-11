#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string	d_name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &object);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &object);
    virtual void attack(std::string const & target);
    void whoAmI();
};

