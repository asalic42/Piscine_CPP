# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
    std::cout << B_BROWN << "ClapTrap constructor called" << NC << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << B_BROWN << "Copy ClapTrap constructor called" << NC << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << B_GREEN << "ClapTrap destructor called" << NC << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
	std::cout << B_CYAN << this->_name << ":" << NC << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << TTAB << " Cannot attack because he's dead." << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << TTAB << " Doesn't have enough energy points to attack." << std::endl;
	else
	{
		std::cout << TTAB << " Attacks " << target << std::endl;
		this->_energyPoints--;
		std::cout << B_COLOR << "* Energy points : " << this->_energyPoints << " *" << NC << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << B_CYAN << this->_name << ":" << NC << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << TTAB << " Doesn't have enough energy points to be repaired." << std::endl;
	else
	{
		this->_hitPoints += amount;
		std::cout << TTAB << " Recovers " << amount << " life points.\n\t\t-> Hit Points : " << this->_hitPoints << std::endl;
		this->_energyPoints--;
		std::cout << B_COLOR << "* Energy points : " << this->_energyPoints << " *" << NC << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << B_CYAN << this->_name << ":" << NC << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << TTAB << B_RED << " Is already dead." << NC << std::endl;
	else
	{
		this->_hitPoints -= amount;
		std::cout << TTAB << " Takes " << amount << " damages.\n\t\t-> Hit Points : " << this->_hitPoints << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << TTAB << B_RED << " Is dead." << NC << std::endl;
	}
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &bis)
{
	this->_name = bis._name;
	this->_hitPoints = bis._hitPoints;
	this->_energyPoints = bis._energyPoints;
	this->_attackDamage = bis._attackDamage;
	return *this;
}