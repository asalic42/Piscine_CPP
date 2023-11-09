#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {};

std::string& Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string value)
{
    this->type = value;
}
