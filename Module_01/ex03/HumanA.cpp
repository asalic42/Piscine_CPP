# include "Weapon.hpp"

HumanA::HumanA(std::string name, const Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << "\x1b[35;1mHumanA Constructor\x1b[0m" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "\x1b[31;1mHumanA Destructor\x1b[0m" << std::endl;
}