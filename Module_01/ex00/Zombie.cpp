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
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(void) {};

Zombie::~Zombie(void)
{
    std::cout << "\x1b[31;1m" << this->name << " Destroyed\x1b[0m" << std::endl;
};