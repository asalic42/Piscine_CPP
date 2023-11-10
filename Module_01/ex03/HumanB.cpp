#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
    std::cout << "\x1b[35;1mHumanB Constructor\x1b[0m" << std::endl;
}

void        HumanB::setWeapon(Weapon& weapon)
{
    weapon.setType(weapon.getType());
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "\x1b[31;1mHumanB Destructor\x1b[0m" << std::endl;
}