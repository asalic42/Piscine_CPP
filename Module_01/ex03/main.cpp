# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main(void)
{
    {
        Weapon  obj = Weapon("gun");
        HumanA  human1("Bob", obj);
        human1.attack();
        std::cout << " --- Weapon change --- " << std::endl;
        obj.setType("knife");
        human1.attack();
    }

    {
        Weapon  obj = Weapon("hammer");
        HumanB  human2("James");
        human2.setWeapon(obj);
        human2.attack();
        std::cout << " --- Weapon change ---" << std::endl;
        obj.setType("knife");
        human2.attack();
    }
    return (0);
}