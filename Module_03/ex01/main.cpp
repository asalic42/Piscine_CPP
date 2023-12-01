# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	many("Many");
	ScavTrap	ferdinand("Ferdinand");
	ClapTrap	ross("Ross");
	ScavTrap	noa("Noa");


	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 1\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	std::cout << std::endl;
	many.attack("Ross");
	ross.takeDamage(5);
	ross.attack("Many");
	many.takeDamage(2);
	many.beRepaired(10);
	many.attack("Ross");
	ross.takeDamage(10);

	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 2\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	ferdinand.guardGate();
	noa.guardGate();
	ferdinand.attack("Noa");
	noa.takeDamage(50);
	noa.beRepaired(10);
	ferdinand.attack("Noa");
	noa.takeDamage(70);
	noa.attack("Ferdinand");


	std::cout << "\t\t\t┌───────────────────────┐" << std::endl;
	std::cout << "\t\t\t│\tBattle 3\t│" << std::endl;
	std::cout << "\t\t\t└───────────────────────┘" << std::endl;
	ferdinand.guardGate();
	ferdinand.attack("Many");
	many.takeDamage(9);
	many.attack("Ferdinand");
	ferdinand.takeDamage(50);
	ferdinand.beRepaired(3);
	many.attack("Ferdinand");
	ferdinand.takeDamage(30);
	many.beRepaired(20);
	ferdinand.attack("Many");
	many.takeDamage(10);
	many.attack("Ferdinand");
	ferdinand.takeDamage(25);

	std::cout << std::endl;
	std::cout << "└─────── Winner is :" << std::endl;
	std::cout << "\t\t\t┌──────────────────┐" << std::endl;
	std::cout << "\t\t\t│\x1b\t[35;1mMANY\t   \x1b[0m│" << std::endl;
	std::cout << "\t\t\t└──────────────────┘" << std::endl;
}