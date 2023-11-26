# include "Dog.hpp"

Dog::Dog(void) : Animals()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound(void)
{
    std::cout << "Wouf" << std::endl;
}

Dog&    Dog::operator=(const Dog &bis)
{
    if (this != &bis)
        Animals::operator=(bis);
    return (*this);
}