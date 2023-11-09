#include "Weapon.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
    std::cout << "je construis\n";
}

void        HumanB::setWeapon(std::string type)
{
    this->weapon.setType(type);
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}