# include "Dog.hpp"
# include <cstring>

Dog::Dog(void) : Animal()
{
    this->_type = "Dog";
    this->brainD = new Brain();
    std::cout << B_PURP "Dog default constructor called" NC << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->_type = copy._type;
    this->brainD = new Brain(*copy.brainD);
    if (!this->brainD)
    {
        std::cout << "Error : Malloc failed" << std::endl;
        return ;
    }
    *this = copy;
    std::cout << B_PURP "Dog copy constructor called" NC << std::endl;
}

Dog::~Dog(void)
{
    std::cout << B_PURP "Dog destructor called" NC << std::endl;
    if (this->brainD)
        delete this->brainD;
}

std::string Dog::getType(void) const
{
    return (this->_type);
}

Brain*    Dog::getBrain(void) const
{
    return this->brainD;
}
void            Dog::makeSound(void) const 
{
    std::cout << "Wouf" << std::endl;
}

Dog&    Dog::operator=(const Dog &bis)
{
    if (this->brainD)
        delete this->brainD;
    if (this != &bis)
    {
        this->_type = bis._type;
        this->brainD = new Brain(*bis.brainD);
    }
    return (*this);
}