# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &bis)
{
    if (this != &bis)
        ClapTrap::operator=(bis);
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "High five buddy ?" << std::endl;
    std::cout << "*high five between the two*" << std::endl;
}


FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

