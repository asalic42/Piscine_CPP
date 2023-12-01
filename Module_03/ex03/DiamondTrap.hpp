#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    public:
    
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap&    operator=(const DiamondTrap &bis);
        ~DiamondTrap(void);

        using ScavTrap::attack;
        void    whoAmI(void);
        void    print(void);

    private:
        std::string _name;
};

#endif


