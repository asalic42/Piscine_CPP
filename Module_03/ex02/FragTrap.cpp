# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << B_GREEN << "FragTrap constructor called" << NC << std::endl;
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
    std::string clap;
    std::cout << "👏High five buddy ?(y/n)";
    signal(SIGINT, SIG_IGN);
    if(!std::getline(std::cin, clap))
    {
        std::cout << B_RED <<"ERROR : getline failed" << NC << std::endl;
        return ;
    }
    if (clap == "y")
        std::cout << "\t*high five between the two*\n" << std::endl;
    else if (clap == "n")
        std::cout << "\talright, next time I hope...\n" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << B_BROWN << "FragTrap destructor called" << NC << std::endl;
}

