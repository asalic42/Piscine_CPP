#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  *zombie_bis = new Zombie;

    zombie_bis->set_name(name);
    zombie_bis->announce();
    delete zombie_bis;
}
