# include "Zombie.hpp"

int main()
{
    Zombie  *zombie;

    std::cout << "Premier Zombie create: Frog" << std::endl;
    zombie = newZombie("Frog");
    zombie->announce();
    delete zombie;

    std::cout << "Deuxieme Zombie just annouced : Berny" << std::endl;
    randomChump("Berny");
    return (0);
}