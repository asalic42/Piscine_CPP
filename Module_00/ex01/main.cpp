#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook	repertoire;
    std::string cmd;

	/* Vrai code pour l'exo */

    // std::cout << "ADD, SEARCH or EXIT ? ", std::getline(std::cin, cmd);
	while (cmd != "EXIT")
	{
    	std::cout << "ADD, SEARCH or EXIT ? ";
		if (!std::getline(std::cin, cmd))
			break;
		if (cmd == "ADD")
			repertoire.add();
		else if (cmd == "SEARCH")
			repertoire.search();
		std::cin.clear();
	}
    return (0);
}