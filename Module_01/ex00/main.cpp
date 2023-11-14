# include "Zombie.hpp"

int main()
{
    Zombie  *zombie;

    std::cout << "\x1b[35;1mFirst zombie allocated and announced :\x1b[0m Frog" << std::endl;
    zombie = newZombie("Frog");
    zombie->announce();
    delete zombie;

    std::cout << "\x1b[35;1mSecond zombie not allocated and announced :\x1b[0m Berny" << std::endl;
    randomChump("Berny");
    return (0);
}