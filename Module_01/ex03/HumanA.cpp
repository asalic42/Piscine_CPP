# include "Weapon.hpp"

HumanA::HumanA(std::string _name, const Weapon _weapon) : name(_name), weapon(_weapon) {};

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}