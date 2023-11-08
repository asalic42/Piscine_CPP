#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook	repertoire;
    std::string cmd;

	while (cmd != "EXIT")
	{
    	std::cout << "\nADD, SEARCH or EXIT ? ";
		if (!std::getline(std::cin, cmd))
			break;
		std::cout << std::endl;
		if (cmd == "ADD")
			repertoire.add();
		else if (cmd == "SEARCH")
			repertoire.search();
		std::cin.clear();
	}
    return (0);
}