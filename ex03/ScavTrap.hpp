 #pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(std::string name);
    void guardGate();
    ~ScavTrap();
    void attack(const std::string &target);
};
