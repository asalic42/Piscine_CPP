# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) 
{
    this->_name = name;
    this->_hitPoints = this->FragTrap::_hitPoints;
    this->_energyPoints = this->ScavTrap::_energyPoints;
    this->_attackDamage = this->FragTrap::_attackDamage;
    std::cout << B_GREEN << "DiamondTrap constructor called" << NC << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << B_GREEN << "DiamondTrap copy constructor called" << NC << std::endl;
    *this = copy; 
}

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap &bis)
{
    if (this != &bis)
    {
        ClapTrap::operator=(bis);
        ScavTrap::operator=(bis);
        FragTrap::operator=(bis);
    }
    return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name is : " << this->_name << std::endl;
    std::cout << "ClapTrap\'s name is : " << this->ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << B_BROWN << "DiamondTrap destructor called" << NC << std::endl;
}