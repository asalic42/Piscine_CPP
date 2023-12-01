# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diana("Diana");
	ClapTrap	cole("Cole");

	diana.print();
	diana.whoAmI();
	cole.attack("Diana");
	diana.takeDamage(8);
}
