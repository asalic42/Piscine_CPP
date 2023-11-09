#include "Zombie.hpp"

int    main(void)
{
    Zombie  *zombies;

    zombies = zombieHorde(15, "BenJ");
    delete [] zombies;
    return (0);
}