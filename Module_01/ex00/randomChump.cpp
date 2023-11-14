#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  zombie_bis;

    zombie_bis.set_name(name);
    zombie_bis.announce();
}
