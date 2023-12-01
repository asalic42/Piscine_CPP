# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	many("Many");
	ScavTrap	ferdinand("Ferdinand");
	FragTrap	bill("Bill");
	FragTrap	hopper("Hopper");

	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 1\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	ferdinand.attack("Many");
	many.takeDamage(5);
	many.attack("Ferdinand");
	ferdinand.takeDamage(30);
	many.attack("Ferdinand");
	ferdinand.takeDamage(50);
	many.beRepaired(50);
	ferdinand.attack("Many");
	many.takeDamage(20);
	many.attack("Ferdinand");
	ferdinand.takeDamage(35);

	std::cout << std::endl;
	std::cout << "└─────── Winner is :" << std::endl;
	std::cout << "\t\t\t┌──────────────────┐" << std::endl;
	std::cout << "\t\t\t│\x1b\t[35;1mMANY\t   \x1b[0m│" << std::endl;
	std::cout << "\t\t\t└──────────────────┘" << std::endl;

	hopper.attack("Bill");
	bill.takeDamage(30);
	bill.attack("Hopper");
	hopper.takeDamage(30);
	hopper.beRepaired(30);
	bill.beRepaired(30);

	std::cout << "Match Nul !" << std::endl;
	hopper.highFivesGuys();
}