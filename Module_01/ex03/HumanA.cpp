# include "Weapon.hpp"

HumanA::HumanA(std::string _name, const Weapon& _weapon) : name(_name), weapon(_weapon)
{
    std::cout << "\x1b[35;1mHumanA Constructor\x1b[0m" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "\x1b[31;1mHumanA Destructor\x1b[0m" << std::endl;
}