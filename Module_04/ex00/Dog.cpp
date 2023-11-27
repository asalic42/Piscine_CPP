# include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    std::cout << B_PURP "Dog default constructor called" NC << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << B_PURP "Dog copy constructor called" NC << std::endl;
}

Dog::~Dog(void)
{
    std::cout << B_PURP "Dog destructor called" NC << std::endl;
}

std::string Dog::getType(void) const
{
    return (this->_type);
}

void    Dog::makeSound(void) const 
{
    std::cout << "Wouf" << std::endl;
}

Dog&    Dog::operator=(const Dog &bis)
{
    if (this != &bis)
        Animal::operator=(bis);
    return (*this);
}