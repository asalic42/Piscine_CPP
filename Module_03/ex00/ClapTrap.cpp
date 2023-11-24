# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
    std::cout << B_BROWN << "ClapTrap constructor" << NC << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << B_BROWN << "Copy ClapTrap constructor" << NC << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << B_GREEN << "ClapTrap destructor" << NC << std::endl;
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
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << B_CYAN << this->_name << ":" << NC << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << TTAB << " Is already dead." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		std::cout << TTAB << " Takes " << amount << " damages.\n\t\t-> Hit Points : " << this->_hitPoints << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << TTAB << " Is dead." << std::endl;
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