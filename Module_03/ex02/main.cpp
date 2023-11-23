# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	many("Many");
	ScavTrap	ferdinand("Ferdinand");
	FragTrap	bill("Bill");
	ClapTrap	ross("Ross");
	ScavTrap	noa("Noa");
	FragTrap	hopper("Hopper");

	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 1\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	std::cout << std::endl;
	many.attack("Ross");
	ross.takeDamage(30);
	ross.attack("Many");
	many.takeDamage(70);
	many.beRepaired(30);
	many.attack("Ross");
	ross.takeDamage(80);

	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 2\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	ferdinand.attack("Noa");
	noa.takeDamage(100);
	noa.beRepaired(10);
	ferdinand.attack("Noa");
	noa.takeDamage(20);
	noa.attack("Ferdinand");


	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 3\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	ferdinand.attack("Many");
	many.takeDamage(30);
	many.attack("Ferdinand");
	ferdinand.takeDamage(50);
	ferdinand.beRepaired(30);
	many.attack("Ferdinand");
	ferdinand.takeDamage(70);
	ferdinand.attack("Many");
	many.takeDamage(20);
	many.beRepaired(10);
	many.attack("Ferdinand");
	ferdinand.takeDamage(20);

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
	hopper.highFivesGuys();
	bill.highFivesGuys();
}