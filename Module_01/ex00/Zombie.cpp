#include "Zombie.hpp"

std::string Zombie::get_name(void)
{
    return (this->name);
}

void Zombie::set_name(std::string new_name)
{
    this->name = new_name;
}

void    Zombie::announce()
{
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(void) {};

Zombie::~Zombie(void)
{
    std::cout << this->get_name() << " Destroyed" << std::endl;
};