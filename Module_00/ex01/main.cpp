#include "PhoneBook.hpp"

// Welcome PhoneBook ou PhoneBook juste
void	welcome_phonebook(void)
{
	// std::cout << "┌─────┐ ┌     ┐ ┌─────┐ │\\    │ ┌────── ┌────┐  ┌─────┐ ┌─────┐ │   /   " << std::endl;
	// std::cout << "│     │ │     │ │     │ │ \\   │ │       │    │  │     │ │     │ │  /    "<< std::endl;
	// std::cout << "├─────┘ ├─────┤ │     │ │  \\  │ ├────── ├────┴┐ │     │ │     │ ├─┤     "<< std::endl;
	// std::cout << "│       │     │ │     │ │   \\ │ │       │     │ │     │ │     │ │ \\    "<< std::endl;
	// std::cout << "└       └     ┘ └─────┘ │    \\│ └────── └─────┘ └─────┘ └─────┘ │  \\   "<< std::endl;
	// std::cout << "       __                              __                      __          ";
	// std::cout << "      /\ \                            /\ \                    /\ \         ";
	// std::cout << " _____\ \ \___     ___     ___      __\ \ \____    ___     ___\ \ \/'\     ";
	// std::cout << "/\ '__`\ \  _ `\  / __`\ /' _ `\  /'__`\ \ '__`\  / __`\  / __`\ \ , <     ";
	// std::cout << "\ \ \L\ \ \ \ \ \/\ \L\ \/\ \/\ \/\  __/\ \ \L\ \/\ \L\ \/\ \L\ \ \ \\`\   ";
	// std::cout << " \ \ ,__/\ \_\ \_\ \____/\ \_\ \_\ \____\\ \_,__/\ \____/\ \____/\ \_\ \_\ ";
	// std::cout << "  \ \ \/  \/_/\/_/\/___/  \/_/\/_/\/____/ \/___/  \/___/  \/___/  \/_/\/_/ ";
	// std::cout << "   \ \_\                                                                   ";
	// std::cout << "    \/_/ 																	 ";

	std::cout << "\x1b[36;1m";
	std::cout << "       __                              __                      __ " << std::endl;                                    
 	std::cout << "      /\\ \\                            /\\ \\                    /\\ \\ " << std::endl;                              
 	std::cout << " _____\\ \\ \\___     ___     ___      __\\ \\ \\____    ___     ___\\ \\ \\/'\\" << std::endl;                          
 	std::cout << "/\\  __`\\ \\  _ `\\  / __`\\ /' _ `\\  /'__`\\ \\ '__`\\  / __`\\  / __`\\ \\ , < " << std::endl;                
 	std::cout << "\\ \\ \\L\\ \\ \\ \\ \\ \\/\\ \\L\\ \\/\\ \\/\\ \\/\\  __/\\ \\ \\L\\ \\/\\ \\L\\ \\/\\ \\L\\ \\ \\ \\\\\\" << std::endl;
 	std::cout << " \\ \\ ,__/\\ \\_\\ \\_\\ \\____/\\ \\_\\ \\_\\ \\____\\\\ \\_,__/\\ \\____/\\ \\____/\\ \\_\\ \\_\\" << std::endl;          
 	std::cout << "  \\ \\ \\/  \\/_/\\/_/\\/___/  \\/_/\\/_/\\/____/ \\/___/  \\/___/  \\/___/  \\/_/\\/_/" << std::endl;                      
 	std::cout << "   \\ \\_\\ " << std::endl;                                 
 	std::cout << "    \\/_/ " << std::endl;
	std::cout << "\x1b[0m" << std::endl;
}


int main(void)
{
    PhoneBook	repertoire;
    std::string cmd;

	welcome_phonebook();
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