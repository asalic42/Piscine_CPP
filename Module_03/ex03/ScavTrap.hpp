#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public : 

        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &bis);
        ScavTrap&   operator=(const ScavTrap &bis);
        ~ScavTrap(void);

        void    attack(const std::string &target);
        int     getEnergy(void);
        void    guardGate(void);
};

#endif