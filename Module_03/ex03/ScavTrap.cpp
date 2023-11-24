# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{   
    this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << B_BROWN << "ScavTrap constructor called" << NC << std::endl;  
}

ScavTrap::ScavTrap(const ScavTrap &bis) : ClapTrap(bis)
{
    std::cout << B_BROWN << " Copy ScavTrap constructor called" << NC << std::endl; 
}

ScavTrap::~ScavTrap(void)
{
    std::cout << B_GREEN << "ScavTrap destructor called" << NC << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap: \n\tGate Keeper Mode -> " << B_GREEN << "activated" << NC << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    std::cout << B_CYAN << this->_name << ":" << NC << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << B_RED << "\t\tScavTrap says: Cannot attack because he's dead." << NC << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "\t\tScavTrap says: Doesn't have enough energy points to attack." << std::endl;
	else
	{
		std::cout << "\t\tScavTrap says: Attacks" << target << std::endl;
		this->_energyPoints--;
        std::cout << B_COLOR << "* Energy points : " << this->_energyPoints << " *" << NC << std::endl;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap &bis)
{
    if (this != &bis)
        ClapTrap::operator=(bis);
    return (*this);
}
