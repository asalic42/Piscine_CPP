# include "Animal.hpp"

Animal::Animal(void)
{
    this->_type = "Animal";
    std::cout << B_CYAN "Animal default constructor called" NC << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << B_CYAN "Animal copy constructor called" NC << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Doesn't make any sound" << std::endl;
}

Animal&    Animal::operator=(const Animal &bis)
{
    if (this != &bis)
        this->_type = bis._type;
    return (*this);
}

Brain*    Animal::getBrain(void) const
{
    return (0);
}

Animal::~Animal(void)
{
    std::cout << B_CYAN "Animal destructor called" NC << std::endl;
}
