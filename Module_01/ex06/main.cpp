#include "Harl.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
		std::cout << "\x1b[31;1m\tERROR : 2 arguments required\x1b[0m" << std::endl;
	else
	{
		Harl	harlfilter;
		harlfilter.is_switch(av[1]);
	} 
	return 0;
}