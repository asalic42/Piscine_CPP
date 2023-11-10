#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{
    std::cout << "\x1b[35;1mWeapon Constructor\x1b[0m" << std::endl;
}

const std::string& Weapon::getType(void) const
{
    return (this->type);
}

void    Weapon::setType(const std::string& value)
{
    this->type = value;
}

Weapon::~Weapon(void)
{
    std::cout << "\x1b[31;1mWeapon Destructor\x1b[0m" << std::endl;
}