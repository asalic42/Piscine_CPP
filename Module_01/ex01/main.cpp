#include "Zombie.hpp"

int    main(void)
{
    Zombie  *zombies;
    int     nb=3;

    zombies = zombieHorde(nb, "BenJ");
    for (int i=0; i < nb; i++)
		zombies->announce();
    delete [] zombies;
    return (0);
}