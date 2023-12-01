#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <csignal>

# define B_GREEN    "\x1b[32;1m"
# define B_BROWN    "\x1b[33;1m"
# define B_CYAN     "\t\x1b[36;1m"
# define B_COLOR    "\t\t\x1b[35m"
# define B_RED      "\x1b[31m"
# define NC         "\x1b[0m"
# define TTAB       "\t\t->"

class ClapTrap
{
    public :
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &bis);
        ClapTrap&   operator=(const ClapTrap &bis);
        ~ClapTrap(void);

        void	attack(const std::string &target);
        void	takeDamage(unsigned int amount);
        void	beRepaired(unsigned int amount);

    protected:
        std::string	_name;
        int			_hitPoints;
        int			_energyPoints;
        int			_attackDamage;
};

#endif
