# include "Weapon.hpp"

int main(void)
{
    Weapon  obj = Weapon("gun");

    HumanA  human1("Bob", obj);
    human1.attack();
    obj.setType("knife");
    human1.attack();

    Weapon  obj = Weapon("hammer");
    HumanB  human2("James");
    human2.attack();
    obj.setType("knife");
    human2.attack();
    return (0);
}