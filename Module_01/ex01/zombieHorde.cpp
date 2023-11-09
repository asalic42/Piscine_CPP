#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		horde->set_name(name);
		// std::cout << "Je m'appelle " << horde->get_name() << std::endl;
		horde->announce();
	}
	return (horde);
}