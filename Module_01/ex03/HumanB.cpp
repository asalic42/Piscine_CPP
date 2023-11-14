#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    std::cout << "\x1b[35;1mHumanB Constructor\x1b[0m" << std::endl;
}

void        HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " doesn't have any weapons" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "\x1b[31;1mHumanB Destructor\x1b[0m" << std::endl;
}