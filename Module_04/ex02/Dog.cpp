# include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    this->brainD = new Brain();
    std::cout << B_PURP "Dog default constructor called" NC << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << B_PURP "Dog copy constructor called" NC << std::endl;
}

Dog::~Dog(void)
{
    delete this->brainD;
    std::cout << B_PURP "Dog destructor called" NC << std::endl;
}

std::string Dog::getType(void) const
{
    return (this->_type);
}

const Brain*    Dog::getBrain(void) const
{
    return this->brainD;
}
void            Dog::makeSound(void) const 
{
    std::cout << "Wouf" << std::endl;
}

Dog&    Dog::operator=(const Dog &bis)
{
    this->brainD = bis.brainD;
    if (this != &bis)
        Animal::operator=(bis);
    return (*this);
}