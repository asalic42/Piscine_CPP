# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	many("Many");
	ClapTrap	ross("Ross");
	ClapTrap	val("Val");

	std::cout << std::endl;
	many.attack("Ross");
	ross.takeDamage(3);
	ross.attack("Val");
	val.takeDamage(7);
	ross.beRepaired(4);
	many.attack("Val");
	val.takeDamage(5);
	val.attack("Many");
	std::cout << std::endl;
	
}